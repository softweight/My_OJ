#include <iostream>
#include<vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        Preorder(root, ans);
        return ans;
    }

    void Preorder(TreeNode *node, vector<int>& ans){
        if (!node) return;
        
        ans.push_back(node->val);
        Preorder(node->left, ans);       // L
        Preorder(node->right, ans);      // R
    }
};