#include<iostream>
#include<vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i = 1;i<nums.size();i++){
            ans.push_back(ans[i-1]+nums[i]);
            cout<<"nums[i-1]+nums[i]"<<endl;
        }
    }
