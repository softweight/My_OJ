#include <iostream>
using namespace std;
#include<vector>


class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long sec = *min_element (time.begin, time.end);
        while (true){
            int trips = 0;
            sec++;
            cout<<"sec : "<< sec<<endl;
            for(int t:time){
                cout<<"t : "<< t<<endl;
                
                cout<<"floor : "<< floor(sec/t)<<endl;
                trips += floor(sec/t);
                
            }
            cout<< trips <<endl;
            if (trips >= totalTrips) return sec;
        }
    }
};