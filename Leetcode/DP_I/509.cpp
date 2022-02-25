class Solution {
public:
    int fib(int n) {
        vector <int>ans;
        
        if(n == 0) return 0;
        if(n == 1) return 1;
        ans.push_back(0);
        ans.push_back(1);
        

        for(int i = 2;i<=n;i++){
            ans.push_back(ans[i-1] + ans[i-2]);
        }
        return ans[n];
    }
};