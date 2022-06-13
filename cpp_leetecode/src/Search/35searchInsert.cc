#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
        int mid, ans;
        while(lo <= hi) {
            mid = lo + (hi - lo) / 2;
            if(target >= nums[mid]) {
                ans = mid + 1;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return ans;
    }
}
