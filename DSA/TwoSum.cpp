/* Leetcode Q.1 Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/


//Not optimized solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int i=0;
        int size = nums.size();
        for( i; i<size; i++) {
            for(int j=i+1; j<size; j++) {
                if(nums[i]+nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};
