//https://leetcode.com/problems/take-gifts-from-the-richest-pile/description/
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {

        long long sum = 0;
        int n = gifts.size();
        for (int i = 0; i < k; i++) {
            int idx = findMax(gifts);
            gifts[idx] = sqrt(gifts[idx]);
        }
        for (int i = 0; i < n; i++) {
            sum += gifts[i];
        }
        return sum;
    }
    int findMax(vector<int>&gifts){
        int maxElementIdx=-1;
        int maxElement=INT_MIN;
        for(int i=0;i<gifts.size();i++){
            if(gifts[i]>maxElement){
                maxElement=gifts[i];
                maxElementIdx=i;
            }
        }
        return maxElementIdx;
    }
};