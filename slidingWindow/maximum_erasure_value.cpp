//https://leetcode.com/problems/maximum-erasure-value/description/
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        unordered_map<int,int>mp;
        int sum=0;
        int  maxSum=0;
        while(j<n){
            mp[nums[j]]++;
            sum+=nums[j];
            while(mp[nums[j]]>1){
                mp[nums[i]]--;
                sum-=nums[i];
                i++;
            }
            maxSum=max(maxSum,sum);
            j++;
        }
        return maxSum;
    }
};