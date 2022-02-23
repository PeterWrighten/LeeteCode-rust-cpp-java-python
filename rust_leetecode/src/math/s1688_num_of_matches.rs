pub struct Solution;

impl Solution {
    pub fn num_of_matches(n: i32) -> i32 {
        let mut num = n;
        let mut ans = 0;
        while num != 1 {
            if num % 2 == 0 {
                ans += num / 2;
                num = num / 2;
            } else {
                ans += (num - 1) / 2;
                num = (num - 1) / 2 + 1;
            }
        }
        ans
    }
}

#[cfg(test)]
mod test {
    use super::*;
    #[test]
    fn test_s1688() {
        assert_eq!(6, Solution::num_of_matches(7));
        assert_eq!(13, Solution::num_of_matches(14));
    }
}