// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int layer = 0;
    int x;
    cin>> layer;
    
    vector<int> cake_stack;
    for(int i =0;i<layer;i++){
        cake_stack.push_back(0);
        cin>>x;
        if(x!=0){
            if(x>=i+1){
                for(int j=0;j<=i;j++){
                    cake_stack[j]= 1;
                }
            }
            else{
                int j = i;
                while(x>0){
                    cake_stack[j] = 1;
                    j--;
                    x--;
                }
            }
        }
    }
    cout<<cake_stack[0];
    for(int j = 1;j<cake_stack.size();j++){
        cout<<" "<<cake_stack[j];
    }
    cout<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": "<<endl;
        solve();
    }
}