//https://leetcode.com/problems/longest-subsequence-with-limited-sum/description/
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {

        int n = nums.size();
        int m = queries.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        vector<int> prefixSum(n);
        prefixSum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }
        for(int &target:queries){
            int idxLessthan=findTarget(prefixSum,target);
            if(idxLessthan==n){  //indicates not found;
                ans.push_back(0);
            }
            else ans.push_back(idxLessthan+1);
        }
        return ans;
    }
    int findTarget(vector<int>&prefixSum,int target){
        int n=prefixSum.size();
        int l=0;
        int r=n-1;
        int ans=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(prefixSum[mid]<=target){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};