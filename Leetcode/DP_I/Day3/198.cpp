class Solution {
public:
    int func(vector<int>& nums,int start,int end){
        nums[start+1] = max(nums[start],nums[start+1]);
        for(int i = start+2;i<=end;i++){
            nums[i] = max(nums[i] + nums[i-2],nums[i-1]);
        }
        cout<<nums[end]<<endl;
        return nums[end];
    }
    
    
    int rob(vector<int>& nums) {
        vector<int> nums2;
        nums2.assign(nums.begin(),nums.end());
        if(nums.size()<= 3){
            return *max_element(nums.begin(),nums.end());
        }
        int L = nums.size();
        return max(func(nums,0,L-2) , func(nums2,1,L-1));
    }
};