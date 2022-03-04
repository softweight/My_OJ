class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sold = 0, hold = INT_MIN, rest = 0;
        for (const int &x: prices){
            hold = max(hold, rest - x);
            rest = max(rest, sold);
            sold = hold + x;
        }
        return max(sold, rest);
    }
};