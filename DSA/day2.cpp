
#include<iostream>
using namespace std;

int main() {
    // pre increment and post increment
    int a=0, i=4;
    cout<<"POST INCREMENT"<<endl;
    cout<< "Before values: "<<endl;
    cout<<"a: "<<a<<" "<<"i: "<<i<<endl;
    a=i++;
    cout<< "After values: "<<endl;
    cout<<"a: "<<a<<" "<<"i: "<<i<<endl;
    cout<<"PRE INCREMENT"<<endl;
    a=0, i=4;
    cout<< "Before values: "<<endl;
    cout<<"a: "<<a<<" "<<"i: "<<i<<endl;
    a=++i;
    cout<< "After values: "<<endl;
    cout<<"a: "<<a<<" "<<"i: "<<i<<endl; 
    //Question 1
    int a,b =1;
    a=10;
    if (++a) {
        cout<<b;
    }
    else
        cout<< ++b;    //output=1
    //Question 2
    int a=1, b=2;
    if(a-- >0 && ++b>2) {
        cout<<"Stage 1 - Inside If ";
    } else{
        cout<<"Stage 2 - Inside Else ";
    }
    cout<<a<<" "<<b<<endl;  //output: Stage 1 - inside if 0 3
    // print Fibonacci series up to 10 numbers using for-loop
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    int sum=0;
    int first=0, second=1;
    cout<<first<<endl<<second<<endl;
    for(int i=2; i<n; i++) {
        sum=first+second;
        cout<<sum<<endl;
        first=second;
        second=sum;
    }
    // check whether a number is prime or not using for loop
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool isPrime=1;
    for(int i=2; i<n; i++) {
        if (n%i==0) {
            cout<<"Not a prime number."<<endl;
            isPrime=0;
            break; }
    }
    if(isPrime) 
        cout<<"It is a prime number."<<endl;
}
    // Leetcode question: 1281. Subtract the Product and Sum of Digits of an Integer
    class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, prod=1;
        int rem=0;
        while(n!=0) {
            rem=n%10;
            sum=sum+rem;
            prod=prod*rem;
            n=n/10;
        }
        int ans=prod-sum;
        return ans;
    }
};

//Leetcode question: 191. Number of 1 Bits
/* Approach: 1.run loop until n becomes 0. 
2.check if(n&1) --> bitwise AND operator, will check if last digit is 1
3.increment count if last digit is 1. close 'if' block
4.right shift n by 1 bit --> n=n>>1 */
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0) {
            if(n&1) {
                count++;
            }
            n = n>>1;
        }
        return count;
    }
};
