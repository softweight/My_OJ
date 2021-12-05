#include <iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};