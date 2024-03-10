//questions on array
#include<iostream>
using namespace std;

//swap alternate elements --> {1,2,3,4,5,6}  o/p = {2,1,4,3,6,5}
void altSwap(int arr[], int size) {
    for(int i=0; i<size; i+=2) {
        if(i+1 < size)
            swap(arr[i],arr[i+1]);
    }
}
void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n, array[100];
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++) {
        cin>>array[i];
    }
    altSwap(array, n);
    cout<<"Array after swapping alternate elements is: "<<endl;
    printArray(array, n);
    return 0;
}
