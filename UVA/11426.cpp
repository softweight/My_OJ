#include <iostream>
#include <cstring>
using namespace std;
int age[100];

int main(){
    int N,ipt;
    
    while(cin>> N){
        if (N == 0) break;
        memset(age, 0, sizeof(age));
        for (int i=0; i<N; i++){
            cin >> ipt;
            age[ipt]++;
        }
        int flag = 1;
        for (int i=0; i<100; i++){
            while (age[i]--){
                if(flag){
                    flag = 0;
                    cout << i;
                }else{
                    cout << " " << i;
                }
            }

        }
        cout<<endl;
    }
}