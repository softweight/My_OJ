#include <iostream>
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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;
        queue<TreeNode* > q;
        TreeNode* node;
        TreeNode* tmp;
        q.push(root);
        while(!q.empty()){
            node = q.front();
            if(node->left || node->right){
                tmp = node->left;
                node->left = node->right;
                node->right = tmp;
            }
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            q.pop();
        }
        return root;
    }
};

// Note that:  invertTree in C++
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;
        
        TreeNode* temp = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(temp);

        return root;
    }
};