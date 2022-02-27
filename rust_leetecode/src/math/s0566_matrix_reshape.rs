pub struct Solution;
 impl Solution {
     pub fn matrix_reshape(mat: Vec<Vec<i32>>, r: i32, c: i32) -> Vec<Vec<i32>> {
         if mat.len() * mat[0].len() == (r * c) as usize {
             mat.concat().chunks(c as usize).map(|v| v.to_vec()).collect()
         } else {
             mat
         }
     }
 }

 #[cfg(test)]
 mod tests {
     use super::*;
     #[test]
     fn test_s0566() {
        assert_eq!(vec![vec![1, 2, 3, 4]], Solution::matrix_reshape(vec![vec![1, 2], vec![3, 4]], 1, 4));
        assert_eq!(vec![vec![1, 2], vec![3, 4]], Solution::matrix_reshape(vec![vec![1, 2], vec![3, 4]], 2, 2));
     }
 }