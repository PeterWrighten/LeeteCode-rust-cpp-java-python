pub struct Solution{}

impl Solution {
    pub fn max_sub_array(nums: Vec<i32>) -> i32 {
        let mut sum = 0;
        let mut max = nums[0];
        for &val in  nums.iter() {
            sum = std::cmp::max(sum + val, val);
            max = std::cmp::max(max, sum);
        }
        max
    }
}