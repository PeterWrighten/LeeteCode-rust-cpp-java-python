use std::collections::HashMap;

pub struct Solution {}

impl Solution {
    pub fn contain_duplicate(nums: Vec<i32>, k: i32) -> bool {
        let mut map = HashMap::new();
        for (idx, &num) in nums.iter().enumerate() {
            match map.get(&num) {
                Some(v) => {
                    if idx - v <= k as usize {
                        return true;
                    }
                    map.insert(num, idx);
                }

                None => {
                    map.insert(num, idx);
                }
            }
        }
        false
        
    }
}

#[cfg(test)]
mod tests {
    use super::Solution;
    #[test]
    fn test_s0219() {
        assert_eq!(true, Solution::contain_duplicate(vec![1, 2, 3, 1], 3));
        assert_eq!(true, Solution::contain_duplicate(vec![1, 0, 1, 1], 1));
        assert_eq!(false, Solution::contain_duplicate(vec![1, 2, 3, 1, 2, 3], 2));
    }
}