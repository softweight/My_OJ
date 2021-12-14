#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        long long ans = 0;
        int max = INT32_MIN;
        int min = INT32_MAX;
        for(int i=1 ; i < nums.size();i++){
            cout<<i<<endl;
            for(int j=0 ; j< nums.size()-i;j++){
                
                max = *max_element(nums.begin()+j, nums.begin()+j+i+1);
                min = *min_element(nums.begin()+j, nums.begin()+j+i+1);
                cout<<max<<" "<<min<<endl;
                ans += max - min;
            }
            cout<<ans<<"\n"<<endl;
        }
        return ans;
    }
};