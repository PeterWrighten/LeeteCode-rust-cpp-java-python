use std::collections::HashMap;

pub struct Solution {}

impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let mut hash: HashMap<i32, i32> = HashMap::new();
        for &val in nums.iter() {
            if let Some(val) = hash.get(&val) {
                return true;
            }
            hash.insert(val, val);
        }
        false
    }
}