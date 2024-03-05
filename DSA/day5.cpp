#include<iostream>
using namespace std;

//Question - calculate nCr using function
int factorial (int num) {
        int product = 1;
        while(num!=0) {
                product = product * num;
                num--;
        }
        return product;
}

//AP question
int ap(int n) {
    int ans = 3*n+7;
    return ans;
}

int main() {
  //Question - calculate nCr using function
        int n, r;
        cout<<"Enter n: ";
        cin>>n;
        cout<<"Enter r: ";
        cin>>r;
        int nCr = factorial(n) / (factorial(r) * factorial(n-r));
        cout<<"nCr = "<<nCr<<endl;
  //AP question
    int num;
    cout<<"Enter n: ";
    cin>>num;
    int result = ap(num);
    cout<<"nth term = "<<result<<endl;
}
