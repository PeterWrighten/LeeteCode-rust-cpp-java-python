pub struct Solution{}

impl Solution {
    pub fn min_diff(nums: Vec<i32>, k: i32) -> i32 {
        let mut nums = nums;
        nums.sort();
        let mut ans = i32::MAX;
        for i in 0..(nums.len() + 1 - k as usize) {
            ans = ans.min(nums[i + k as usize - 1] - nums[i]);
        }
        ans
    }
 }

 #[cfg(test)]
 mod tests {
     use super::*;
     #[test]
     fn test_s1984() {
         assert_eq!(0, Solution::min_diff(vec![90], 1));
         assert_eq!(2, Solution::min_diff(vec![9, 4, 1, 7], 2));
     }
 }