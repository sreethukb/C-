/* LEETCODE Question 852
An array arr is a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.
*/

//SOLUTION
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end-start)/2;
        while(start < end) {
            if(arr[mid] < arr[mid+1]) {     //arr[mid] lies in the left part of mountain
                start = mid+1;
            } 
            else {   //arr[mid] is either the peak index or lies in the right part of mountain
                end = mid;
            }
            mid = start + (end - start)/2;
        }
        return start;
    }
};
