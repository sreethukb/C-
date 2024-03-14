/* You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case. */

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int size = arr.size();
    sort(arr.begin(), arr.end());
    for(int i=0; i<size-1; i++) {
        if((arr[i] ^ arr[i+1]) == 0) {
            return arr[i];
            break;
        }
    }
	
}
