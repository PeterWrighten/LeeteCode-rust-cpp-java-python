package Math.S0566matrixShape;

class Solution {
    public int[][] matrixShape(int[][]nums, int r, int c) {
        if(nums.length * nums[0].length != r * c) {
            return nums;
        }
        int[][] ans = new int[r][c];
        for(int i = 0; i < nums.length; i++) {
            for(int j = 0; j < nums[0].length; j++) {
                ans[((nums[0].length * i + j) / c) % r][(nums[0].length * i + j) % c] = nums[i][j];
            }
        }
        return ans;
    }
}