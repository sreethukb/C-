/* Leetcode 846. Hand of Straights 
Alice has some number of cards and she wants to rearrange the cards into groups so that each group is of size groupSize, and consists of groupSize consecutive cards.

Given an integer array hand where hand[i] is the value written on the ith card and an integer groupSize, return true if she can rearrange the cards, or false otherwise.

Example 1:

Input: hand = [1,2,3,6,2,3,4,7,8], groupSize = 3
Output: true
Explanation: Alice's hand can be rearranged as [1,2,3],[2,3,4],[6,7,8]
Example 2:

Input: hand = [1,2,3,4,5], groupSize = 4
Output: false
Explanation: Alice's hand can not be rearranged into groups of 4.
*/

//Solution
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();

        map<int, int> handMap;
        for(int &handNumber : hand) {
            handMap[handNumber]++;   // storing frequency(handNumber) in map
        } 

        while(!handMap.empty()) {
            int current = handMap.begin()->first;
            for(int i=0; i<groupSize; i++) {
                if(handMap[current+i] == 0) {
                    return false;
                }
                handMap[current+i]--;
                if(handMap[current + i] < 1) {
                    handMap.erase(current + i);
                }
            }
        }
        return true;
    }
};
