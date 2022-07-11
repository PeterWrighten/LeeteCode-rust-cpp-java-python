#include<vector>
#include<iostream>
using namespace std;


class Solution {
    private:
        void dfs(vector<int>&, vector<int>&, vector<vector<int> >&, int);
    public:
        vector<vector<int> > subset(vector<int>&);
};

void Solution::dfs(vector<int>& nums, vector<int>& tmp, vector<vector<int> >& ans, int i) {
    if(i == nums.size())    return;

    tmp.push_back(nums[i]);
    ans.push_back(tmp);

    dfs(nums, tmp, ans, i+1);
    tmp.pop_back();
    dfs(nums, tmp, ans, i+1);
}

vector<vector<int> > Solution::subset(vector<int>& nums) {
    vector<int> tmp;
    vector<vector<int> > ans;
    ans.push_back(tmp);
    dfs(nums, tmp, ans, 0);
    return ans;
}

int main() {
    Solution s;
    vector<int> nums = {1, 3, 9, 2};
    vector<vector<int> > ans = s.subset(nums);
    for(int i = 0; i < ans.size(); i++) {
        cout << i+1 << endl;
        cout << "[ ";
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "]" << endl;
    }
    cout << endl;
}
