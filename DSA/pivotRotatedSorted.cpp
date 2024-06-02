#include<iostream>
using namespace std;

int pivotIndex(int arr[], int n) {
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start < end) {
        if(arr[mid] < arr[0]) {  //if true: mid lies in the second line i.e., right side part
            end = mid;
        }
        else{  //mid lies in left side part
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main() {
    int arr[5] = {7,8,1,3,5}; //rotated sorted array
    int pivot = pivotIndex(arr, 5);
    cout<<"The pivot index is: "<<pivot<<endl;

    return 0;
}