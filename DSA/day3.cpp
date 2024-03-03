//conversions --> decimal to binary, binary to decimal 
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    //converting decimal to binary
    /* LOGIC:
    1. extract the bits of the num using bitwise AND operator and store in "bit"
    2. store the bits in reverse using formula ans=(bit*(pow(10,i)))+ans
    3. right shift num and increment i
    */
   int num;
   cout<<"Enter number: ";
   cin>>num;
   float ans=0;  //use float because pow function usually gives result in float and converting to int can give the wrong result
   int i=0;
   int bit;
   while(num!=0) {
    bit = num & 1; // extracting bit
    ans = (bit * (pow(10,i))) + ans; //reversing the order of digits
    num = num>>1; //right shift
    i++;
   }
   cout<<"Answer: "<<ans<<endl;

  //converting binary to decimal
   int n;
   cout<<"Enter a binary number: ";
   cin>>n;
   int digit, i=0;
   int ans=0;
   while(n!=0) {
    digit = n%10;
    if(digit!=0) {
        ans = (pow(2,i)) + ans;
    }
    n = n/10;
    i++;
   }
   cout<<"Answer: "<<ans<<endl;

  //Leetcode question: 7. Reverse Integer
  /* Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned). */
  class Solution {
public:
    int reverse(int x) {
        int digit, ans=0;
        while(x!=0) {
            digit = x%10;
            if(ans > INT_MAX/10 || ans<INT_MIN/10) {
                return 0;
            }
            ans = (ans * 10) + digit;
            x = x/10;
        }
        return ans;
    }
};

  //Leetcode question: 1009. Complement of Base 10 Integer
  /* The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement. */
  class Solution {
public:
    int bitwiseComplement(int n) {
      /* APPROACH: eg. n=5 --> in binary it will be 000....101
      we have to calculate its 1's complement i.e. 010 (only last 3 digits)
      if we take ~n then we get 111....010 --> not what we needed
      so we create a mask variable so that when we add (&) it with ~n we get the desired output, that is 000...010
      HOW TO CREATE MASK VARIABLE: initialize mask=0
      left shift mask by 1 and then OR(|) it with 1 
      right shift m by 1
      FINAL ANS: add(&) mask variable to ~n and return
      */
        if(n==0)    
            return 1;
        int m = n; //create copy of n
        int mask = 0; //mask variable
        while (m!=0) {
            mask = (mask<<1) | 1;  
            m = m>>1;
        }       
        int ans = (~n) & mask;
        return ans;
    }
};

  //LeetCode question: 231. Power of Two 
  /* Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x. */ 
  //bruteforce solution
  class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0; i<31; i++) {
            int ans = pow(2,i);
            if(n==ans) 
                return true; 
        }
        return false;
    }
};
  //DYNAMIC PROGRAMMING approach
  class Solution {
public:
    bool isPowerOfTwo(int n) {
       int ans=1;
       for(int i=0; i<=30; i++) {
           if(ans == n)
             return true;
           if(ans < INT_MAX/2)
              ans = ans *2;
       }
       return false;
    }
};

  
}
