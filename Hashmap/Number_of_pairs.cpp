//https://leetcode.com/problems/maximum-number-of-pairs-in-array/description/
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        vector<int>ans(2);
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int noOfPairs=0;
        int leftElement=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            // int val=it.fist;
            int frequency=it->second;
            noOfPairs+=frequency/2;
            leftElement+=frequency%2;
            
        }
        ans[0]=noOfPairs;
        ans[1]=leftElement;
        return ans;
    }
};