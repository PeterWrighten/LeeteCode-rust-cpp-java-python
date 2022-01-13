#include<vector>
using namespace std;

class Solution {
public:
    int dominantIdx(vector<int>& nums) {
        int m1 = -1;
        int m2 = -1;
        int idx = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > m1) {
                m2 = m1;
                m1 = nums[i];
                idx = i;
            } else if(nums[i] > m2) {
                m2 = nums[i];
            }
        }
        return m1 >= m2 * 2 ? idx : -1;
    }
};