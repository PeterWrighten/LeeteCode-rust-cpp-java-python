pub struct Solution;

impl Solution {
    pub fn reverse_prefix(word: String, ch: char) -> String {
        let mut n = 0;
        let sum = word.len();
        for c in word.chars() {
            if c == ch {
                break;
            } else {
                n += 1;
            }
        }
        if n >= sum {
            return word;
        }
        let ans = word[0..=n].chars().rev().collect::<String>();
        if n == sum - 1 {
            return ans;
        } 
        ans + &word[n+1..].to_string()
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn test_s2000() {
        assert_eq!("dcbaefd".to_string(), Solution::reverse_prefix("abcdefd".to_string(), 'd'));
        assert_eq!("zxyxxe".to_string(), Solution::reverse_prefix("xyxzxe".to_string(), 'z'));
        assert_eq!("abcd".to_string(), Solution::reverse_prefix("abcd".to_string(), 'z'));
    }
}