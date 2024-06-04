/* CODE STUDIO question ALLOCATE BOOKS
Problem Statement:
after 'N' days, And to score good marks he has to study 'M' chapters and the ith chapter requires TIME[i] seconds to study. The day in Ayush’s world has 100^100 seconds. There are some rules that are followed by Ayush while studying.
1. He reads the chapter in a sequential order, i.e. he studies i+1th chapter only after he studies ith chapter.
2. If he starts some chapter on a particular day he completes it that day itself.
3. He wants to distribute his workload over 'N' days, so he wants to minimize the maximum amount of time he studies in a day.
Your task is to find out the minimal value of the maximum amount of time for which Ayush studies in a day, in order to complete all the 'M' chapters in no more than 'N' days.
For example

if Ayush want to study 6 chapters in 3 days and the time that each chapter requires is as follows:
Chapter 1 = 30
Chapter 2 = 20
Chapter 3 = 10
Chapter 4 = 40
Chapter 5 = 5
Chapter 6 = 45

Then he will study the chapters in the following order 

| day 1 : 1 , 2 | day 2 : 3 , 4 | day 3 : 5 , 6 |
Here we can see that he study chapters in sequential order and the maximum time to study on a day is 50, which is the minimum possible in this case.

Refer to understand - https://youtu.be/YTTdLgyqOLY?si=8fOM0gXIIPyzEebz
*/

//SOLUTION
#include <bits/stdc++.h> 

bool isPossible(vector<int> time, long long m, long long n, long long mid){
	long long day = 1;
	long long totalSeconds = 0;
	for(long long i=0; i<m; i++) {
		if(totalSeconds + time[i] <= mid) {
			totalSeconds += time[i];
		}
		else {
			day++;
			if(day>n || time[i]>mid) {
				return false;
			}
			totalSeconds = time[i];
		}
	}
	return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	long long start = 0;
	long long sum = 0;
	for(int i = 0; i<m; i++) {
		sum += time[i];
	}
	long long end = sum;
	long long ans = -1;
	long long mid = start + (end - start)/2;
	while(start <= end) {
		if(isPossible(time, m, n, mid)) {
			ans = mid;
			end = mid-1;
		}
		else {
			start = mid+1;
		}
		mid = start + (end-start)/2;
	}
	return ans;	
}
