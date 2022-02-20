struct solution{};

impl solution {
    fn min_diff(nums: Vec<i32>, k: i32) -> i32 {
        let mut nums = nums;
        nums.sort();
        nums.windows(k as usize)
            .map(|x| x[k as usize -1] - x[0])
            .min()
            .unwrap()
    }
}
