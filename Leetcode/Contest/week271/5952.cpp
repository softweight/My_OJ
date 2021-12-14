#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int countPoints(string rings) {
        unordered_map<char,vector<int>> umap;
        int ans = 0;
        for(int i= 0;i<rings.size();i+=2){
            umap[rings[i]].push_back(rings[i+1] - '0');
        }
        for(int i=0 ;i < 10;i++){
            if(find(umap['R'].begin(),umap['R'].end(),i) != umap['R'].end()){
                if(find(umap['G'].begin(),umap['G'].end(),i) != umap['G'].end()){
                    if(find(umap['B'].begin(),umap['B'].end(),i) != umap['B'].end()){
                        ans++;
                    }
                }
            }
        }
        return ans;


    }
};