
pub struct Solution;
impl Solution {
    pub fn number_of_steps(mut num: i32) -> i32 {
        let mut count = 0;
        loop {
            if num == 0 { break; }
            count += 1;
            if num % 2 == 0 {
                num = num / 2;
            } else {
                num -= 1;
            }
        }
        count
    }
}

#[cfg(test)]
mod test {
    use super::*;
    #[test]
    fn test_s1342() {
        assert_eq!(6, Solution::number_of_steps(14));
        assert_eq!(4, Solution::number_of_steps(8));
        assert_eq!(12, Solution::number_of_steps(123));
    }
}
