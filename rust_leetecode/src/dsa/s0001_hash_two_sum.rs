use std::collections::HashMap;

pub struct Solution;

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut hash: HashMap<i32, i32> = HashMap::new();
        for (i, &val) in nums.iter().enumerate() {
            if let Some(&v) = hash.get(&(target - val)) {
                return vec![v, i as i32];
            }
            hash.insert(val, i as i32);
        }
        vec![0]
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_s0001() {
        assert_eq!(vec![0, 1], Solution::two_sum(vec![2, 7, 11, 15], 9));
        assert_eq!(vec![1, 2], Solution::two_sum(vec![3, 2, 4], 6));
    }
}
