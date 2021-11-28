#include <iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size() * mat[0].size() != r * c) return mat;

        vector<vector<int>> ans(r, vector<int>(c));
        
        int itr = 0;
        for(int row = 0;row<mat.size();row++){
            for(int col = 0;col<mat[0].size();col++){
                ans[itr/c][itr%c] = mat[row][col];
                itr++;
            }
        }
        return ans;
    }
};