
class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int maxSize = 0;
        int currSize = 0;
        int neg = 0;
        for(auto x : nums) {
            if(x > 0){
                currSize++;
                neg = neg>0?neg+1:0;
            }else if(x < 0){
                int tmp = currSize;
                currSize = neg>0?neg+1:0;
                neg = tmp>0?tmp+1:1;
            }else{
                currSize = 0;
                neg = 0;
            }
            maxSize = max(maxSize, currSize);
        }
        return maxSize;
    }
};