#include<iostream>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int max = 0;
        int cnt = 0;
        for(int i = 1;i<s.size();i++){
            if(s[i] == s[i-1]) cnt++;
            else{
                max = cnt > max ? cnt:max;
                cnt = 0;
            }
        }
        return max+1;
    }
};