//https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/description/
class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n=nums.size();
        int noOfOperations=0;
        for(int i=1;i<n;i++){
             if(nums[i]<=nums[i-1]){
                noOfOperations+=nums[i-1]-nums[i]+1;
                nums[i]=nums[i-1]+1;
             }
        }
        return noOfOperations;
    }
};