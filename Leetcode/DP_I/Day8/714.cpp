class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int hold = INT_MIN;
        int sell = 0;
        for(const auto x: prices) {
            hold = max(hold, sell- x- fee);
            sell = max(sell, hold+ x);
        }
        return sell;
    }
};