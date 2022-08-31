
// A solution for LongestUnivalueTree (Not path)

#include<vector>;
using namespace std;


class Solution {
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  public:
    int longestUnivaluePath(TreeNode* root) {
        if(root == nullptr) return 0;
        int cnt = 0;
        int res = 0;
        vector<TreeNode*> stack;
        stack.push_back(root);
        while(!stack.empty()) {
            TreeNode* tmp = stack.back();
            stack.pop_back();
            if(tmp->left != nullptr)
                stack.push_back(tmp->left);
            if(tmp->right != nullptr)
                stack.push_back(tmp->right);

            int val = tmp->val;
            if(tmp->left && tmp->left->val == val) {
                cnt += helper(tmp->left, val);
            } 
            if(tmp->right && tmp->right->val == val) {
                cnt += helper(tmp->right, val);
            }
            res = max(res, cnt);
            cnt = 0;
        }
        return res;
    }
    int helper(TreeNode* root, int val) {
        if(root == nullptr) return 0;
        if(root->val != val) {
            return 0;
        } else {
            return 1 + max(helper(root->left, val), helper(root->right, val));
        }
    }  
};
