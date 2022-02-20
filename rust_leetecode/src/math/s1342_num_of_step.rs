
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