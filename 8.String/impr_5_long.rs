struct Solution {}

impl Solution {
    pub fn longest_palindrome(s: String) -> String {
        let (mut start, mut end) = (0, 0);
        let mut dp = vec![vec![false; s.len()];s.len()];
        let s = s.chars().collect::<Vec<_>>();
        for i in (0..s.len()).rev() {
            for j in i..s.len() {
                if i == j || j - i == 1 && s[i] == s[j] {
                    dp[i][j] = true;
                } else {
                    dp[i][j] = dp[i+1][j-1] && s[i] == s[j];
                }
                if j - i > end - start && dp[i][j] {
                   start = i;
                   end = j;
                }
            }
        }
        s[start..=end].iter().collect()
    }
        
}

