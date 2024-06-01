#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;   //to take care of range of integer

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }

        else if(arr[mid] < key) {  //mid is less than key => key lies in right part
            start = mid + 1;
        }

        else {  //mid greater than key => key lies in left part
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return -1;
}

int main() {
    int evenArr[8] = {2,5,9,12,78,81,99,100} ;
    int oddArr[5] = {0,34,65,87,105} ;
    int index = binarySearch(evenArr, 8, 78) ;
    cout<< "Index of 78 in evenArr is: "<< index<<endl;
    index = binarySearch(oddArr, 5, 34) ;
    cout<< "Index of 34 in oddArr is: "<<index<<endl;

    return 0;
}