//if-else and while loops
#include<iostream>
using namespace std;

int main() {
    /*char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch>='a'&& ch<='z') {
        cout<<"It is a lowercase char."<<endl;
    }
    else if(ch>='A'&& ch<='Z') {
        cout<<"It is an uppercase char."<<endl;
    }
    else{
        cout<<"It is a digit."<<endl;
    } */

    //while loop
    /*int i=1;
    while(i<=45) {
        cout<<"Hello no."<<i<<endl;
        i++;
    } */

    //sum of all even numbers from 1 to n
    /*int n,sum;
    cout<<"Enter n: ";
    cin>>n;
    sum=0;
    int i=1;
    while(i<=n) {
        if(i%2==0) {
            sum=sum+i;
        }
        i++;
    }
    cout<<"The sum is = "<<sum<<endl;*/
     
    //pattern1 
    /*
    ****
    ****
    ****
    ****
    
    int i=0;
    while(i<4) {
        int j=0;
        while(j<=4) {
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }

    //pattern 2
    *
    **
    ***
    ****
   int i=0;
    while(i<4) {
        int j=0;
        while(j<=i) {
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    } */
    //pattern 3
    /*
    111
    222
    333
   int i=1;
   while(i<4) {
    int j=0;
    while(j<3){
        cout<<i;
        j++;
    }
    cout<<endl;
    i++;
   } */
   //pattern 4
   /*
   1
   23
   345
   4567
   */
   /*int i=0;
   while(i<4) {
    int j=1;
    while(j<=i+1){
        cout<<i+j<<" ";
        j++;
    }
    cout<<endl;
    i++;
   } */
   // pattern 5
   /*
   AAA
   BBB
   CCC
   */
  /*int i=0;
  char ch='A';
  while(i<3) {
    int j=0;
    while(j<3) {
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    ch=ch+1;
    i++;
  } */
  // pattern 6
  /*
     *
    **
   ***
  ****
  */
  /* int i=1;
  while(i<=4) {
    int space=4-i;
    while(space>=0) {
        cout<<" ";
        space--;
    }
    int j=1;
    while(j<=i) {
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
  } */
  //pattern 7   STAR PYRAMID
  int i=1;
  int n=4;
  while(i<=n) {
    int space=n-i;
    while(space) {
        cout<<" ";
        space--;
    }
    int j=1;
    while(j<=i) {
        cout<<j;
        j++;
    }
    int k=i-1;
    while(k) {
        cout<<k;
        k--;
    }
    cout<<endl;
    i++;
    }
}