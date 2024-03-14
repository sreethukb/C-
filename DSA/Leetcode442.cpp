/* Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space. */


//CAN BE OPTIMIZED
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i=0; i<size-1; i++) {
            if((nums[i] ^ nums[i+1]) ==0) {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
