//https://leetcode.com/problems/binary-subarrays-with-sum/
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        int n=nums.size();
        unordered_map<int,int>mp;
        int sum=0;
        mp[0]=1;
        int count=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            auto it=mp.find(sum-goal);
            if(it!=mp.end()){
                count+=it->second;
            }
            mp[sum]++;
        }
        return count;
    }
};