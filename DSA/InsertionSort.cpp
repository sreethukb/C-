#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.

    //first loop for number of rounds
    //total no. of rounds = n-1
    for(int i=1; i<n; i++) {
        //second loop checks left element of i
        int temp = arr[i];
        int j = i-1;
        for(; j >= 0; j--) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
