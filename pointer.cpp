//pointer is a data type which hold the address of other data types
// * is known as dereference operator
// & is the 'address of' operator
#include<iostream>
using namespace std;

int main() {
    int a=3;
    int* b=&a;    //int* is the pointer datatype which stores address of the variable a i.e., &a
    cout<<"The address allocated to variable 'a' in the memory is: "<<b<<endl;
    cout<<"The value at this address (i.e. b) is: "<<*b<<endl;  //b is the address and * will point to the value at b
    //pointer to pointer : stores address of a pointer variable
    //for example: a pointer c stores the address of the pointer b
    cout<<endl;
    int** c=&b;
    cout<<"The address of the pointer variable b is: "<<c<<endl;
    cout<<"The value at this address i.e., c is: "<<*c<<endl;    //the output here will be the same output as address of 'a'
    return 0;
}
