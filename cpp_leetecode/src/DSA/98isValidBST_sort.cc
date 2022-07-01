#include<climits>

using namespace std;

class Solution {
    private:
        struct TreeNode {
          int val;
          TreeNode* left;
          TreeNode* right;
        };
        bool helper(TreeNode* root, long long lower, long long upper) {
            if(root == nullptr) {
                return true;
            }
            if(root->val <= lower || root->val >= upper) {
                return false;
            }
            return helper(root->left, lower, root->val) && helper(root->right, root->val, upper);
        }
    public:
        bool isValidBST(TreeNode* root) {
            return helper(root, LONG_MIN, LONG_MAX);
        }
        
};

int main() {
    Solution s;
    return 0;
}
