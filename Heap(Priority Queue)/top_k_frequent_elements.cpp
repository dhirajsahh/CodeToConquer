//https://leetcode.com/problems/top-k-frequent-elements/description/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto &it:mp){
            pq.push({it.second,it.first});
        }
        vector<int>result;
        for(int i=0;i<k;i++){
            pair<int,int>p=pq.top();
            pq.pop();
            result.push_back(p.second);
        }
        return result;
    }
};