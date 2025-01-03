//https://leetcode.com/problems/number-of-ways-to-split-array/
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        
        int  n=nums.size();
        vector<long long>prefixSum(n);
        prefixSum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }
        long long totalSum=prefixSum[n-1];
        int noOfWays=0;
        for(int i=0;i<n-1;i++){
            long long firstPartSum=prefixSum[i];
            long long remainingSum=totalSum-firstPartSum;
            if(firstPartSum>=remainingSum){
                noOfWays++;
            }
        }
        return noOfWays;
    }
};