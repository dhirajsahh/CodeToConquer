//https://leetcode.com/problems/subsets/description/
// visualize with tree diagram
class Solution {
public:
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        vector<int>temp;
        vector<vector<int>>result;
        findSubset(nums,n,i,temp,result);
        return result;
    }
    void findSubset(vector<int>&nums,int n,int i,vector<int>temp,vector<vector<int>>&result){
           
           if(i==n){
            result.push_back(temp);
            return;
           }
           temp.push_back(nums[i]);
           findSubset(nums,n,i+1,temp,result);
           temp.pop_back();
           findSubset(nums,n,i+1,temp,result);
    }
};