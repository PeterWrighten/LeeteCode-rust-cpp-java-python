use std::vec;

struct solution;
impl solution {
    pub fn count_good_rec(rectangles: Vec<Veec<i32>>) -> i32 {
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
            if max <= i {
                count += 1;
            }
        }
        count
    }
}