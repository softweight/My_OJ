class Solution:
    def twoSum(self, nums, target) :
        h ={}
        
        for i, num in enumerate(nums):
            if target - num in h:
                return (h[target - num], i)
            h[num] = i


