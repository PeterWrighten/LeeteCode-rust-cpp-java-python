use std::collections::HashMap;
// struct Solution;
// impl Solution {
//     fn intersect(nums1: Vec<i32>, nums2: Vec<i32>) -> Vec<i32> {
//         if nums1.len() < nums2.len() {
//             return intersect(nums2, nums1);
//         }
//         let mut hash: HashMap<i32, i32> = HashMap::new();
//         let mut ans: Vec<i32> = Vec::new();
//         for &i in nums1.iter() {
//             if let Some(x) = hash.get_mut(&i) {
//                 *x += 1;
//             }
//         }
//         for &j in nums2.iter() {
//             if let Some(&v) = hash.get(&j) {
//                 if v != 0 {
//                     ans.push(j);
//                     if let Some(x) = hash.get_mut(&j) {
//                         *x += 1;
//                     }
//                 }
//             }
//         }
//         ans

//     } 
// }

// #[cfg(test)]
// mod tests{
//     use super::*;
//     #[test]
//     fn test_s0350() {
//         assert_eq!(vec![], Solution::intersect(vec![], vec![]));
//         assert_eq!(vec![], Solution::intersect(vec![], vec![]));
//     }
// }