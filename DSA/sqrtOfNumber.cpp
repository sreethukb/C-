/* CODE STUDIO Question Square Root of a number
Problem statement
You are given a positive integer ‘n’.

Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of sqrt(n).
Example:
Input: ‘n’ = 7
Output: 2

*/


//solution
long long int binarySearch(int n) {
    int start = 0;
    int end = n;
    long long int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end) {
        long long int square = mid*mid;   //long long int --> because value of mid can be upto 2^31-1, which means mid*mid will exceed the range of int.
        if(square == n) {
            return mid;
        }
        else if(square < n) {
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}


int floorSqrt(int n)
{
    // Write your code here.
    int result = binarySearch(n);
    return result;

}
