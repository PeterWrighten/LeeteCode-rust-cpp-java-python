use std::collections::HashMap;

struct Solution {}

impl Solution {
    pub fn contain_duplicate(nums: Vec<i32>, k: i32) -> bool {
        let mut map = HashMap::new();
        for (idx, &num) in nums.iter().enumerate() {
            match map.get(&num) {
                Some(v) => {
                    if idx - v <= k {
                        return true;
                    }
                    map.insert(num, idx);
                }

                None => {
                    map.insert(num, idx);
                }
            }
        }
        false
        
    }
}