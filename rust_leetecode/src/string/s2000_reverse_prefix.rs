pub struct Solution{}

impl Solution {
    pub fn reverse_prefix(word: String, ch: char) -> String {
        let mut n = 0;
        let len = word.len();
        for c in word.chars() {
            if c == ch {
                break;
            } else {
                n += 1;
            }
        }
        let ans = word[0..=n].chars().rev().collect::<String>();
        if n == len - 1 {
            return ans;
        } 
        ans + &word[n+1..].to_string()
    }
}
