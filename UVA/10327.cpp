#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,x;
    
    while(cin>> n){
        vector<int> vec;
        while(n--){
            cin>>x;
            vec.push_back(x);
        }
        int ans = 0;
        for( int i = 0 ; i < vec.size() ; i++ ){
            for( int j = vec.size()-1 ; j > i ; j-- ){
                if(vec[j]<vec[j-1]){
                    int temp = vec[j];
                    vec[j] = vec[j-1];
                    vec[j-1] = temp;
                    ans++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<ans<<endl;
    }

    return 0;
}