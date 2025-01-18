//https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/
class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<=n-2;i++){
           if(nums[i]==key){
            mp[nums[i+1]]++;
           }
        }
        pair<int,int>p={1,-1};
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>p.second){
                p.second=it->second;
                p.first=it->first;
            }
        }
        return p.first;
    }
};