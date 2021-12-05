#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int up = matrix.size();
        int mid;
        while(true){
            mid = floor((low + up) /2) ;
            if(matrix[mid][0] <= target  && matrix[mid][matrix[mid].size()-1] >= target){
                break;
            }else if(matrix[mid][0] > target){
                if(mid == low || mid == up) return false;
                else up = mid;
            }else if(matrix[mid][matrix[mid].size()-1] < target){
                if(mid == low || mid == up) return false;
                else low = mid;
            }
            if(up <= low ){
                return false;
            }
        }
        int row = mid;
        low = 0;
        up = matrix[mid].size();
        while(true){
            mid = floor((low + up) /2) ;
            if(matrix[row][mid] == target){
                return true;
            }else if(matrix[row][mid] > target){
                if(mid == low || mid == up) return false;
                else up = mid;
            }else if(matrix[row][mid] <= target){
                if(mid == low || mid == up) return false;
                else low = mid;
            }
            if(up <= low ){
                return false;
            }
        }

    }
};