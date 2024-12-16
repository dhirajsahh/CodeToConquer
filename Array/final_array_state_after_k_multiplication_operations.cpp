//https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/description/
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        int n=nums.size();
        
        for(int i=0;i<k;i++){
            int minIndex=findMinElementIndex(nums,n);
            nums[minIndex]=multiplier*nums[minIndex];
        }
        return nums;
    }
    int findMinElementIndex(vector<int>& nums,int n){
        int minElement=INT_MAX;
        int minElementIndex=-1;
        for(int i=0;i<n;i++){
            if(nums[i]<minElement){
                minElement=nums[i];
                minElementIndex=i;
            }
        }
        return minElementIndex;
    }
};