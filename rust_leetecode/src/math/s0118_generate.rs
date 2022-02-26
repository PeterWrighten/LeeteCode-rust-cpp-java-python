pub struct Solution {}

impl Solution {
    pub fn generate(num_rows: i32) -> Vec<Vec<i32>> { 
        let mut ans:Vec<Vec<i32>> = vec![];
        for i in 1..num_rows+1{
            let i = i as usize;
            let mut row:Vec<i32> = vec![1;i];
            for j in 1..i-1{
                let j = j as usize;
                row[j]=ans[i-2][j-1]+ans[i-2][j];
            }
            ans.push(row);
        }
        ans
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn test_s0118() {
        assert_eq!(vec![vec![1], vec![1, 1], vec![1, 2, 1], vec![1, 3, 3, 1], vec![1, 4, 6, 4, 1]], Solution::generate(5));
        assert_eq!(vec![vec![1]], Solution::generate(1));
    }
}