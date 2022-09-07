#include <vector>
using namespace std;

// Keypoint: findSwap2Nodes, use double pointer method

class Solution {
    struct TreeNode {
      int val;
      TreeNode* left;
      TreeNode* right;
      TreeNode(): val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
    };

    void as_vector(TreeNode* root, vector<int>& tree) {
        if(root == nullptr) return;
        as_vector(root->left, tree);
        tree.push_back(root->val);
        as_vector(root->right, tree);
    }

    void recover(TreeNode* root, int x, int y, int count) {
        if(root == nullptr) return;
        if(root->val == x || root->val == y) {
            root->val = root->val == x ? y : x;
            count--;
            if(count == 0) return;
        }

        recover(root->left, x, y, count);
        recover(root->right, x, y, count);
    }

    void recoverTree(TreeNode* root) {
        vector<int> tree;
        as_vector(root, tree);
        int l = -1, r = -1;
        for(int i = 0; i < tree.size() - 1; i++) {
            if(tree[i+1] < tree[i]) {
                r = i+1;
                if(l == -1) {
                    l = i;
                }
            }
        }
        int v1 = tree[l], v2 = tree[r];
        recover(root, v1, v2, 2);
    }
};
