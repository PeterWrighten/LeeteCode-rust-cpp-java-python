pub struct Solution;

impl Solution {
    pub fn str_str(haystack: &str, needle: &str) -> i32 {
        match haystack.find(needle) {
            Some(v) => v as i32,
            None => -1
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn test_s0028() {
        assert_eq!(Solution::str_str("hello", "ll"), 2);
        assert_eq!(Solution::str_str("aaaaa", "bba"), -1);
        assert_eq!(Solution::str_str("", ""), 0);
    }
}