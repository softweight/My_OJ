class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int ans = 0;

        for(auto i:prices){
            if(i>buy){
                ans=max(ans,i-buy);
            }
            else buy = i;
        }
        return ans;
    }
};