//https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum/description
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        vector<int>idx;
        while(k!=0 && !pq.empty()){
            pair<int,int>maxElementPair=pq.top();
            pq.pop();
            idx.push_back(maxElementPair.second);
            k--;

        }
        sort(idx.begin(),idx.end());
        for(int i=0;i<idx.size();i++){
            ans.push_back(nums[idx[i]]);
        }
        return ans;
      
    }
};