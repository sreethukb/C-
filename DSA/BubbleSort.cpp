// BUBBLE SORT
/* Code studio Bubble Sort Question 
Bubble Sort is one of the sorting algorithms that works by repeatedly swapping the adjacent elements of the array if they are not in sorted order.
You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Bubble Sort algorithm.*/

//Solution
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=1; i<n; i++) {
        for(int j=0; j<n-i; j++) {  // for ith round, j will go from 0 to n-i .... eg. n=6 --> 3rd round --> j will traverse from 0 to <3 i.e., 0, 1, 2 (3,4,5 will be sorted)
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
