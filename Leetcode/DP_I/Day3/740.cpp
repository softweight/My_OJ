class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int maxNum = *max_element(nums.begin(),nums.end());
        
        vector<int> hob(maxNum+1,0);
        
        for(auto x:nums){
            hob[x] += x;
        }
        if(hob.size() == 1 ) return hob[0];
        hob[1] = max(hob[1],hob[0]);
        for(int i=2;i<hob.size();i++){
            hob[i] = max(hob[i] + hob[i-2],hob[i-1]);
        }
        
        return hob[hob.size()-1];
    }
};