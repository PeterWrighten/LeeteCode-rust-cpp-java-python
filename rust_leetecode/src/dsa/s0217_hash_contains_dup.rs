use std::collections::HashMap;

pub struct Solution;

impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let mut hash: HashMap<i32, i32> = HashMap::new();
        for &val in nums.iter() {
            if let Some(val) = hash.get(&val) {
                return true;
            }
            hash.insert(val, val);
        }
        false
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn test_s0217() {
        assert_eq!(true, Solution::contains_duplicate(vec![1, 2, 3, 1]));
        assert_eq!(false, Solution::contains_duplicate(vec![1, 2, 3, 4]));
        assert_eq!(true, Solution::contains_duplicate(vec![1, 1, 1, 3, 3, 4, 3, 2, 4, 2]));
    }
}