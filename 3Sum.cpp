/* 3Sum
You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.

An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.

Note:
1. You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then {2, -3, 1}, {-3, 2, 1} etc is also valid triplet. Also, the ordering of different triplets can be random i.e if there are more than one valid triplets, you can return them in any order.
2. The elements in the array need not be distinct.
3. If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".

  */



//SOLUTION
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        if(nums.size() < 3) {
            return ans;
        }
        if(nums[0] > 0) {
            return ans;
        }
        for(int i=0; i<nums.size(); i++) {
            if(i>0 && nums[i] == nums[i-1]) {
                continue;
            }
            int low = i+1;
            int high = nums.size() - 1;
            int sum = 0;
            while(low < high) {
                sum = nums[i] + nums[low] + nums[high];
                if(sum > 0) {
                    high--;
                }
                else if(sum<0) {
                    low++;
                }
                else {
                    ans.push_back({nums[i], nums[low], nums[high]});
                    int lastLow = nums[low];
                    int lastHigh = nums[high];
                    while(low<high && nums[low] == lastLow) {
                        low++;
                    }
                    while(low<high && nums[high] == lastHigh) {
                        high--;
                    }
                }
            }
        }
        return ans;
    }
};
