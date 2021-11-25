
// KEY : unordered_map
// same as python dict but the key type must same.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }

        for(auto i:m){
            if(i.second >= 2){
                return true;
            }
        }
        return false
    }
};


// unordered_set
// because there is no same item in a set.
// So, if the nums size more than set size, we can know that the result is True


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > unordered_set(nums.begin(), nums.end()).size();
    }
};