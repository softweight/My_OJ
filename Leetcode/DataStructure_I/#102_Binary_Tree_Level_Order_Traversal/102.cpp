#include<iostream>
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<TreeNode*> nodes;
        nodes.push_back(root);
        if(!root) return ans;
        while(nodes.size() > 0){
            vector<int> level;
            vector<TreeNode*> Nextnodes;
            for(auto i : nodes){
                if(!i) continue;
                level.push_back(i->val);
                if(i->left) Nextnodes.push_back(i->left);
                if(i->right) Nextnodes.push_back(i->right);
            }
            ans.push_back(level);
            nodes = Nextnodes;
        }

        return ans;
    }
};