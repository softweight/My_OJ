#include <string>
#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
        int i =0;
        int j=s.size()-1;
        char temp;
        while(i<=j){
            temp = s[j];
            s[j] = s[i];
            s[i] = temp;
            i++;
            j--;
        }
    }