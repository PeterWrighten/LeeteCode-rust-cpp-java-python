#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:
        vector<vector<int>> subset(vector<int>&);
};


vector<vector<int>> Solution::subset(vector<int>& nums) {
    vector<vector<int>> ans;
    for(int i = 0; i < (1 << nums.size()); i++) {
        vector<int> tmp;
        for(int j = 0; j < nums.size(); i++) {
            if(((i >> j) & 1) == 1)
                tmp.push_back(nums[j]);
        }
        ans.push_back(tmp);
    }
    return ans;
}

int main() {
    Solution s;
    vector<int> nums = {3, 5, 8, 12};
    vector<vector<int>> ans = s.subset(nums);
    
    for(int i = 0; i < ans.size(); i++) {
        cout << i + 1 << endl;
        cout << "[ ";
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "]" << endl;
    }
    cout << endl;
}

