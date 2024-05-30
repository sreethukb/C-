/* Code Studio problem: Pair Sum
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

Note:

Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.
*/

#include <bits/stdc++.h>
#include <math.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector< vector<int> > ans;
   int i = 0;
   int size = arr.size();
   for (i = 0; i < size; i++) {
      for (int j = i+1; j<size; j++) {
         if((arr[i] + arr[j]) == s) {
            vector<int> temp;    //to store a pair in sub-list
            temp.push_back(arr[i]); 
            temp.push_back(arr[j]); 
            sort(temp.begin(), temp.end()); //makes sure that first value in pair will be smaller and second value of pair will be larger
            ans.push_back(temp); //insert the pair into the list 'ans'
         }
      }
   }
   sort(ans.begin(), ans.end()); //pairs in the list 'ans' should be sorted in non-decreasing order
   return ans;
}
