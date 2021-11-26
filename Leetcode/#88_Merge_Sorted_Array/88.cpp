#include <iostream>
#include<vector>
using namespace std;


// ac V1
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        reverse(nums1.begin(),nums1.end());
        reverse(nums2.begin(),nums2.end());

        while(m>0 && n>0){
            if(nums1[nums1.size()-1] <= nums2[nums2.size()-1]){
                ans.push_back(nums1[nums1.size()-1]);
                m--;
                nums1.pop_back();
            }else{
                ans.push_back(nums2[nums2.size()-1]);
                n--;
                nums2.pop_back();
            }
        }
        if(m == 0){
            while(n--){
                ans.push_back(nums2[nums2.size()-1]);
                nums2.pop_back();
            }
        }
        if(n == 0){
            while(m--){
                ans.push_back(nums1[nums1.size()-1]);
                nums1.pop_back();
            }
        }
        nums1 = ans;
    }
};