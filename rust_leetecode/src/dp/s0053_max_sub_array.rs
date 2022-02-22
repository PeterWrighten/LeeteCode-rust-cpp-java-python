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

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn test_s0053() {
        assert_eq!(6, Solution::max_sub_array(vec![-2, 1, -3, 4, -1, 2, 1, -5, 4]));
        assert_eq!(1, Solution::max_sub_array(vec![1]));
        assert_eq!(23, Solution::max_sub_array(vec![5, 4, -1, 7, 8]));
    }
}