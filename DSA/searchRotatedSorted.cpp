/*CODE STUDIO QUESTION Search In Rotated Sorted Array
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now the array is rotated at some pivot point unknown to you.
For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].
Now, your task is to find the index at which ‘k’ is present in 'arr'.
Note :
1. If ‘k’ is not present in 'arr', then print -1.
2. There are no duplicate elements present in 'arr'. 
3. 'arr' can be rotated only in the right direction.
*/

//Solution
int pivotIndex(vector<int>& arr, int n) {
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start < end) {
        if(arr[mid] >= arr[0]) {
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int binarySearch(vector<int>& arr, int start, int end, int k) {
    int mid = start + (end-start)/2;
    while(start <= end) {
        if(arr[mid] == k) {
            return mid;
        }
        else if(arr[mid] < k) {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = pivotIndex(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1]) {
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pivot-1, k);
    }
}
