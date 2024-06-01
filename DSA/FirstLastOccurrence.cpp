#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key) {
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2 ;
    int ans = -1;
    
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid] < key) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int key) {
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans;

    while(start<=end) {
        if(arr[mid] == key) {
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid] < key) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = start + (end-start)/2 ;
    }
    return ans;
}


int main() {
    int nums[10] = {1,2,3,4,5,5,5,7,8,9} ;
    cout << "First occurrence of 5 is at index: " << firstOccurrence(nums, 10, 5) << endl;
    cout << "Last occurrence of 5 is at index: " << lastOccurrence(nums, 10, 5) << endl;

    return 0;
}



//Code Studio Question 
/*  
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.
*/

//solution
int firstOccurrence(vector<int>& arr, int n, int key) {
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2 ;
    int ans = -1;

    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid] < key) {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurrence(vector<int>& arr, int n, int key) {
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2 ;
    int ans = -1;

    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid] < key) {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int, int> result;
    result.first = firstOccurrence(arr, n, k);
    result.second = lastOccurrence(arr, n, k);

    return result;
}
