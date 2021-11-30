#include <iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> umap(0);
        for(auto c : s){
            if(umap.find(c) == umap.end()){
                umap[c] = 1;
            }else{
                umap[c]++;
            }
        }
        for (int i =0 ;i<s.length();i++){
            if(umap[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};