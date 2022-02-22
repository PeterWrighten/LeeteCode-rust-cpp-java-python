
pub struct Solution {}

impl Solution {
    pub fn single_non_duplicate(nums: Vec<i32>) -> i32 {
        let mut nums = nums;
        let mut ans = 0;
        for i in nums.iter() {
            ans ^= i;
        }
        ans
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn test_s0540() {
        assert_eq!(2, Solution::single_non_duplicate(vec![1, 1, 2, 3, 3, 4, 4, 8, 8]));
        assert_eq!(10, Solution::single_non_duplicate(vec![3, 3, 7, 7, 10, 11, 11]));
    }
}