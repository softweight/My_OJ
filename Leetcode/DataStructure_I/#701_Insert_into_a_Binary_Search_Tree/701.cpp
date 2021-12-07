#include<iostream>
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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);
        TreeNode*itr=root;

        while(true){
            if(val < itr->val){
                if(itr->left){
                    itr=itr->left;
                }else{
                    itr->left=new TreeNode(val);
                    break;
                }
            }
            
            else if(val > itr->val){
                if(itr->right){
                    itr=itr->right;
                }
                else{
                    itr->right=new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
};