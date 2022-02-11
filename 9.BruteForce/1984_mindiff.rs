struct solution{};

impl solution {
    fn min_diff(nums: Vec<i32>, k: i32) -> i32 {
        let mut nums = nums;
        nums.sort();
        let mut ans = i32::MAX;
        for i in 0..(nums.len() + 1 - k as usize) {
            ans = ans.min(nums[i + k as usize - 1] - nums[i]);
        }
        ans
    }
 }