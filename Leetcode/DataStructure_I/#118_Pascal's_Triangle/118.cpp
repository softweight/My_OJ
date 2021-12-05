#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int level=0;level<numRows;level++){
            vector<int> row(1,1);
            if(level > 0){
                for(int i = 1;i<level;i++){
                    row.push_back(ans[level-1][i-1]+ ans[level-1][i]);
                }
                row.push_back(1);
            }
            ans.push_back(row);
        }
        return ans;
    }
};