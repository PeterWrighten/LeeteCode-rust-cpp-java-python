#include<climits>

using namespace std;

class Solution {
    private:
        struct TreeNode {
            int val;
            TreeNode* left;
            TreeNode* right;
        };
        long long pre = LONG_MIN;
    public:
        bool isValidBST(TreeNode* root) {
            if(root == nullptr) {
                return true;
            }

            if(!isValidBST(root->left)) {
                return false;
            }

            if(root->val <= pre) {
                return false;
            }

            pre = root->val;
            return isValidBST(root->right);
        }
};


int main() {
    Solution s;
    return 0;
}
