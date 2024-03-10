/*
 *  99. Recover BST
 *
 *  O(n)
 */
#include <iostream>
#include <vector>

using namespace std;

class TreeNode;

class TreeNode {

    public:
        int val;
        TreeNode* left, *right;

        TreeNode(): val(0), left(nullptr), right(nullptr) {}

        TreeNode(int val): val(val), left(nullptr), right(nullptr) {}

        TreeNode(int val, TreeNode* left, TreeNode* right): val(val), left(left), right(right) {}

};

void inorder(TreeNode* root, vector<int>& ans) {
   if(root == nullptr) return;

   inorder(root->left, ans);
   ans.push_back(root->val);
   inorder(root->right, ans);
}

void recover(TreeNode* root, vector<int> ans, int& index) {
    if(root == nullptr) return;

    recover(root->left, ans, index);
    root->val = ans[index];
    if(index < ans.size()-1) index++;
    recover(root->right, ans, index);
}

void recoverBST(TreeNode* root) {
    vector<int> ans;
    inorder(root, ans);
    sort(ans.begin(), ans.end());
    int index = 0;
    recover(root, ans, index);
}

int main() {
   return 0;
}
