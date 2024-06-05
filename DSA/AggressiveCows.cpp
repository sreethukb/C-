/* CODE STUDIO Question Aggressive Cows
Problem Statement:
You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.
You are also given an integer 'k' which denotes the number of aggressive cows.

You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.

Print the maximum possible minimum distance.

Example:
Input: 'n' = 3, 'k' = 2 and 'arr' = {1, 2, 3}
Output: 2
*/

//Solution 
bool isPossible(vector<int> &stalls, int mid, int k) {
    int cows = 1;
    int lastPosition = stalls[0];
    for(int i=0; i<stalls.size(); i++) {
        if(stalls[i] - lastPosition >= mid) {
            cows++;
            if(cows == k) {
                return true;
            }
            lastPosition = stalls[i];
        }       
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int start = 0;
    sort(stalls.begin(), stalls.end());
    int end = stalls[stalls.size()-1] - stalls[0];
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end) {
        if(isPossible(stalls, mid, k)) {
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
