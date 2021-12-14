#include<iostream>
#include<vector>;
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
    int rangeSumBST(TreeNode* root, int low, int high) {
        return BSTtraversal(root, low, high);

    }
    int BSTtraversal(TreeNode* root, int low, int high){
        if(!root) return 0;
        if(root->val < low)  return BSTtraversal(root->right, low, high);
        if(root->val > high)  return BSTtraversal(root->left, low, high);

        return root->val + BSTtraversal(root->right, low, high) + BSTtraversal(root->left, low, high);
        
    }
};