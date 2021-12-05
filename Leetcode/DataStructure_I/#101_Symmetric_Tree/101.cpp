#include<iostream>
#include<queue>
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
    bool isSymmetric(TreeNode* root) {
        return Dect(root->left,root->right);
    }
    bool Dect(TreeNode* left,TreeNode* right){
        if(!left && !right) return true;

        if ((!left || !right) || left->val != right->val) {
            return false;
        }
        return Dect(left->right, right->left) && Dect(left->left, right->right);
    }
};