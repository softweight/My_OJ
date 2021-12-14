#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int posA = 0;
        int posB = plants.size() -1 ;
        int nowA = capacityA;
        int nowB = capacityB;
        int ans = 0;
        while(true){
            cout<<posA<<" "<<nowA<<endl;
            cout<<posB<<" "<<nowB<<endl;
            if ((posB < posA) || (posA == posB && plants[posA] == 0)) return ans;
            cout<<ans<<endl;
            if(plants[posA] != 0){
                if(plants[posA] > nowA){
                    ans++;
                    nowA = capacityA;
                }
                nowA -= plants[posA];
                plants[posA] = 0;
                posA++;
            }
            cout<<plants[posA]<<endl;
            if(plants[posB] != 0){
                if(plants[posB] > nowB){
                    ans++;
                    nowB = capacityB;
                }
                nowB -= plants[posB];
                plants[posB] = 0;
                posB--;
            }

            
        }
    }
};