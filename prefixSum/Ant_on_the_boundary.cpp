//https://leetcode.com/problems/ant-on-the-boundary/description/
//Appraoch-1
class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==0){
                count++;
            }
        }
        return count;
    }
};
//Approach-2
class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixSum(n);
        prefixSum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(prefixSum[i]==0){
                count++;
            }
        }
        return count;
    }
};