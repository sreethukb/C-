//an array is a collection of items of similar datatypes stored in contiguous memory locations
#include<iostream>
using namespace std;

int main() {
    int arr[5];  //arr is the name of array and [5] is the size of array
    //taking input        
    //arr=  10 20 30 40 50
    //index  0  1  2  3  4
    cout<<"Input elements in array: "<<endl;
    for (int i=0; i<5; i++) {
        cin>>arr[i];
    }
    //traversing array
    for (int i=0; i<5; i++) {
        cout<<"Element at index "<<i<<" is: "<<arr[i]<<endl;
    }
    //an array is mutable
    arr[2]=60;
    //printing array with changed value
    cout<<"Array with changed value:"<<endl;    // 10 20 60 40 50
    for (int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;    
}
