/* Brute Force~~ */



pub struct Solution {}

impl Solution {
    pub fn longest_palindrome(s: String) -> String {
        if s.len() == 1 {
            return s;
        }
        let mut ans = Vec::<&str>::new();
        for i in 0..s.len() {
            for j in (i..s.len()).rev() {
                if &s[i..=j] == &s[i..=j].chars().rev().collect::<String>()[..] {
                    ans.push(&s[i..=j]);
                }
            }
        }

        let mut cnt = 0;
        let mut idx = 0;
        for (i, val) in ans.iter().enumerate() {
            if cnt < val.len() {
                cnt = val.len();
                idx = i;
            }
        }
        ans[idx].to_string()
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn test_s0005() {
        assert_eq!("bab".to_string(), Solution::longest_palindrome("babad".to_string()));
        assert_eq!("bb".to_string(), Solution::longest_palindrome("cbbd".to_string()));
    }
}