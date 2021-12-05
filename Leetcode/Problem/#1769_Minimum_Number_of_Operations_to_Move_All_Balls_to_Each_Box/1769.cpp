#include <string>
#include <iostream>
#include <vector>
using namespace std;

vector<int> minOperations(string boxes) {
    vector<int> box;
    vector<int> ans;
    for(int i = 0;i<boxes.size();i++){
        box.push_back(int(boxes[i])-int('0'));
    }
    for(int i = 0;i<boxes.size();i++){
        int round = 0;
        for(int j = 0;j<boxes.size();j++){
            if(i==j) continue;
            if(box[j] == 1){
                if(i>j) round+=i-j;
                else round+=j-i;
            }
            
        }
        ans.push_back(round);
    }
    return ans;
}

int main(){
    string ipt = "110";
    // string ipt = "001011";
    vector<int> opt;
    opt = minOperations(ipt);
    for(int y:opt){
        cout<<y<<" ";
    }

}