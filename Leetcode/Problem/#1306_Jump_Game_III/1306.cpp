#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Solution {
public:
    bool canReach(vector<int>& arr, int start){
        if(start > arr.size()-1 || start < 0 ) return false;
        if(arr[start] == -1) return false;
        if(!arr[start]) return true;
        int shift = arr[start];
        arr[start] = -1;
        return canReach(arr, start + shift) || canReach(arr , start - shift);
    }
};
