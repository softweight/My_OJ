
class Solution {
public:
    int tribonacci(int n) {
        vector <int>ans;
        
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(n == 2 ) return 1;
        ans.push_back(0);
        ans.push_back(1);
        ans.push_back(1);
        

        for(int i = 3;i<=n;i++){
            ans.push_back(ans[i-1] + ans[i-2] + ans[i-3]);
        }
        return ans[n];
    }
};