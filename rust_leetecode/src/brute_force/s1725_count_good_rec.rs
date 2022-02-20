pub struct Solution;
impl Solution {
    pub fn count_good_rec(rectangles: Vec<Vec<i32>>) -> i32 {
        let mut len = Vec::new();
        for rectangle in rectangles.iter() {
            if rectangle[0] > rectangle[1] {
                len.push(rectangle[1]);
            } else {
                len.push(rectangle[0]);
            }
        }
        let mut count = 0;
        let max = len.iter().max();
        for i in len.iter() {
            if max <= Some(i) {
                count += 1;
            }
        }
        count
    }
}

#[cfg(test)]

mod tests {
    use super::*;
    #[test]
    fn test_s1725() {
        assert_eq!(3, Solution::count_good_rec(vec![vec![5, 8], vec![3, 9], vec![5, 12], vec![16, 5]]));
        assert_eq!(3, Solution::count_good_rec(vec![vec![2, 3], vec![3, 7], vec![4, 3], vec![3, 7]]));
    }
}