#include <iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        int r = ransomNote.length();
        int m = magazine.length();
        if(r>m) return false;
        for(auto r : ransomNote){
            m1[r]++;
        }
        for(auto m:magazine){
            m2[m]++;
        }
        for(auto i : m1){
            if(i.second > m2[i.first]) return false;
        }
        return true;
    }
};