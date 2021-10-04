#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        else if (strs.size() == 1) return strs[0];

        int minlen = 200;

        for(auto i:strs){
            if(i.length() < minlen){
                minlen = i.length();
            }
        }
        string str = "";
        for(int i =0;i<minlen;i++){
            char now = strs[0][i];
            for(auto j:strs){
                if(j[i] != now){
				    return str;
                }
            }
            str += now;
        }
        
        return str;
    }


int main(){
    vector<string> strs;
    // strs.push_back("flower");
    // strs.push_back("flow");
    // strs.push_back("flight");

    strs.push_back("a");
    strs.push_back("b");
    strs.push_back("c");
    
    cout<<longestCommonPrefix(strs)<<endl;
}