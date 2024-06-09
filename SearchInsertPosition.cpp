//LEETCODE 35 : Search Insert Position
/* Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1 */

//Solution  -----> Binary search approach
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int mid = start + (end-start)/2;
        if(target > nums[end]) {       //edge case
            return end+1;
        }
        while (start <= end) {
            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] < target) {
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
        return start;
    }
};
