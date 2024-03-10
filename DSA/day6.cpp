//day 6
#include<iostream>
#include<climits>
using namespace std;


//finding min and max value of an array

int MaxValue(int arr[], int size) {
    int max = INT_MIN;
    for(int i = 0; i<size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int MinValue(int arr[], int size) {
    int min = INT_MAX;
    for(int i = 0; i<size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

//sum of elements of array
int arrSum(int arr[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

//LINEAR SEARCH
bool isFound(int arr[], int size, int key) {
    for(int i=0; i<size; i++) {
        if(arr[i] == key) 
            return 1;
    }
    return 0;
}

void printArray(int arr[], int size) {
    for(int i =0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}
//Reversing an array
void arrReverse(int arr[], int size) {
    int start = 0;
    int end = size-1;
    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n;
    int array[100];
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements in array: ";
    for (int i=0; i<n; i++) {
        cin>>array[i];
    }

    int key;
    cout<<"Enter element to search: ";
    cin>>key;
    if(isFound(array, n, key)) {
        cout<<"Element is present."<<endl;
    }
    else    
        cout<<"Element is not present in array."<<endl;
  
    cout<<"Maximum value in array is: "<<MaxValue(array, n)<<endl;
    cout<<"Minimum value in array is: "<<MinValue(array, n)<<endl;
    cout<<"Sum of all elements in the array is: "<<arrSum(array, n);

    arrReverse(array, n);
    cout<<"Reverse of the array is: "<<endl;
    printArray(array, n);
    

    return 0;
}

