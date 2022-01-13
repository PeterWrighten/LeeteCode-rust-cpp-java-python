#include<vector>
using namespace std;

class Solution {
public:
    double findMedian(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> nums(m+n);
        int i = 0, j = 0, k = 0;
        while(k < m+n) {
            while(i >= m && j < n) 
                nums[k++] = nums[j++];
            while(j >= n && i < m) 
                nums[k++] = nums[i++];
            while(j < n && i < m) {
                if(nums1[i] < nums2[j]) 
                    nums[k++] = nums1[i++];
                else  nums[k++] = nums2[j++];
            }
        }
        int mid = (m + n) / 2;
        double avg;
        if((m+n) % 2 == 0) {
            avg = ((double)(nums[mid]) + (double)(nums[mid - 1])) / 2;
        } else {
            avg = (double)(nums[mid]);
        }
        return avg;
    }
};