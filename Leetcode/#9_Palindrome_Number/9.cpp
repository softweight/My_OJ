#include <string>
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    string num = to_string(x);
    string reverse = "";
    for(int i=num.length()-1;i>=0;i--){
        reverse.push_back(num[i]);
    }
    // cout<<reverse<<endl;
    if(reverse == num) return true;
    else return false;
}

int main(){
    int x=121;
    cout<<isPalindrome(x);

    return 0;
}



