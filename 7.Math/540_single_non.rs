
struct Solution {};

impl Solution {
    fn single_non_duplicate(&self, nums: Vec<i32>) -> i32 {
        let mut nums = nums;
        let mut ans = 0;
        for i in nums.iter() {
            ans ^= i;
        }
        ans
    }
}