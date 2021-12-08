#include <iostream>
#include <unordered_map>
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
    unordered_map<int,int>m;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)return root;
        if(root==p || root==q)return root;
        
        TreeNode *LeftNode=lowestCommonAncestor(root->left,p,q);
        TreeNode *RightNode=lowestCommonAncestor(root->right,p,q);
        if(LeftNode && RightNode)
            return root;
        
        else if(LeftNode)
            return LeftNode;
        else 
            return RightNode;

    }
};