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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        Postorder(root, ans);
        return ans;
    }

    void Postorder(TreeNode *node, vector<int>& ans){
        if (!node) return;
        
        Postorder(node->left, ans);
        Postorder(node->right, ans);
        ans.push_back(node->val);
    }
};