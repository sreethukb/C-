//SIMILAR TO BOOK ALLOCATION PROBLEM

/* Code studio question PAINTER'S PARTITION PROBLEM
Problem Statement:
Given an array/list of length ‘n’, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some ‘k’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.

You are supposed to return the area of the minimum time to get this job done of painting all the ‘n’ boards under a constraint that any painter will only paint the continuous sections of boards.

Example :
Input: arr = [2, 1, 5, 6, 2, 3], k = 2
Output: 11
*/

//Solution
bool possibleSolution(vector<int> &arr, int k, int mid) {
    int painter = 1;
    int boardLength = 0;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] + boardLength <= mid) {
            boardLength += arr[i];
        }
        else{
            painter++;
            if(painter>k || arr[i]>mid) {
                return false;
            }
            boardLength = arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int start = 0;
    int lengthSum = 0;
    for(int i=0; i<boards.size(); i++) {
        lengthSum += boards[i];
    }
    int end = lengthSum;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end) {
        if(possibleSolution(boards, k, mid)) {
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
