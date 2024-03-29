#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(string s){
    vector<char> stack;
        for(auto i :s){
            if(i =='(' || i == '[' || i=='{'){
                stack.push_back(i);
            }
            else{
                if(stack.size() == 0) return false;
                if(i==')' && stack[stack.size()-1] != '('){
                    return false;
                }
                else if(i==']' && stack[stack.size()-1] != '['){
                    return false;
                }
                else if(i=='}' && stack[stack.size()-1] != '{'){
                    return false;
                }
                else stack.pop_back();
            }
        }
        if(stack.size() != 0) return false;

        return true;

}

int main(){
    string str = "()";
    cout<<isValid(str);
}