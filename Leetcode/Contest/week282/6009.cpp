class Solution {
public:
    int minSteps(string s, string t) {
        vector<char> sv(s.begin(), s.end());
        vector<char> tv(t.begin(), t.end());
        sort(sv.begin(), sv.end());
        sort(tv.begin(), tv.end());
        
        int ans=0,itrs=0,itrt = 0;
        while(true){
            if(itrs == sv.size()) break;
            if(itrt == tv.size()) break;
            if(sv[itrs] != tv[itrt]){
                ans++;
                if(sv[itrs] < tv[itrt]){
                    itrs++;
                }else{
                    itrt++;
                }
            }else{
                itrs++;
                itrt++;
            }
        }
        ans += sv.size() - itrs;
        ans += tv.size() - itrt;
        return ans;

    }
};