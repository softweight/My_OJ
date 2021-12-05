#include <iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;


// O(N^2) space
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i =0;i<nums.size();i++){
            for(int j =i+1;j<nums.size();j++){
                if(nums[j] == target - nums[i]){
                    ans.push_back(i);
                    ans.push_back(j);
                }
        }
        }
        return ans;
    }
};



// O(N) space
// map.find = find the key

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> ans;    
        
        for(int i=0;i<nums.size();i++){
            if(map.find(target-nums[i])!=map.end()){
                ans.push_back(i);
                ans.push_back(map[target-nums[i]]);
            }
            else{
                map[nums[i]]=i;
            }
            
        }
        return ans;
    }
};