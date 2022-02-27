use std::cmp::{min, max};

pub struct Solution;

impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        let mut ans = 0;
        let mut _min = prices[0];
        for &i in prices.iter() {
            _min = min(_min, i);
            ans = max(ans, i - _min);
        }
        if ans < 0 {
            return 0;
        }
        ans
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn test_s0121() {
        assert_eq!(5, Solution::max_profit(vec![7, 1, 5, 3, 6, 4]));
        assert_eq!(0, Solution::max_profit(vec![7, 6, 4, 3, 1]));
    }
}