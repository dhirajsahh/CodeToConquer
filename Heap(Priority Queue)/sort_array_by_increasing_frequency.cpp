//https://leetcode.com/problems/sort-array-by-increasing-frequency/

class Solution {
public:
    typedef pair<int ,int>p;
    struct lambda{
        bool operator()(p &p1,p &p2){
           if(p1.second!=p2.second){
             return p1.second>p2.second;
           }
           return p1.first<p2.first;
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
    
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        priority_queue <p, vector<p>, lambda > pq; 
        for(auto &it:mp){
            pq.push({it.first,it.second});
        }
        vector<int>ans;
        while(!pq.empty()){
            p temp=pq.top();
            pq.pop();
            int val=temp.first;
            int count=temp.second;
            for(int i=0;i<count;i++){
                ans.push_back(val);
            }
        }
        return ans;
    }
};

