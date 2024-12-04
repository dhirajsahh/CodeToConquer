//https://leetcode.com/problems/sum-of-all-subset-xor-totals/description/

class Solution {
public:
    int sum=0;
    int n;
    int subsetXORSum(vector<int>& nums) {
        n=nums.size();
        vector<int>temp;
        findSubset(nums,temp,0);
        return sum;

    }
    void findSubset(vector<int>&nums,vector<int>&temp,int idx){
        if(idx==n){
           calculateXor(temp);
           return;
        }
        temp.push_back(nums[idx]);
        findSubset(nums,temp,idx+1);
        temp.pop_back();
        findSubset(nums,temp,idx+1);
    }
    void calculateXor(vector<int>&temp){
        int n=temp.size();
        if(n==0){
            sum+=0;
            return;
        }
        else if(n==1){
            sum+=temp[0];
            return;
        }
        int x=temp[0];
        for(int i=1;i<n;i++){
            x=x^temp[i];
        }
        sum+=x;
    }
};