class Solution {
private:
    class TreeNode {
        int val;
    public:
        TreeNode* left;
        TreeNode* right;
    };
    TreeNode* root;

public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* left = invertTree(root->left);
        TreeNode* right = invertTree(root->right);
        root->left = right;
        root->right = left;
        return root;
    }

};
