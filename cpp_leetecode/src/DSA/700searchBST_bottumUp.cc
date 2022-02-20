#include<iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* searchBST(TreeNode* root, int val)
{
    while(root != nullptr)
    {
        if(root->val == val)    return root;
        else if(val < root->val)    root = root->left;
        else root = root->right;
    }
    return nullptr;
}