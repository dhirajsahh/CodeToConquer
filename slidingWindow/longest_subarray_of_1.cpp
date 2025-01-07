//https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int n=nums.size();
        int i=0;
        int j=0;
        int countOfZero=0;
        int length=0;
        while(j<n){
            if(nums[j]==0){
                countOfZero++;
            }
            while(countOfZero>1){
                if(i<n && nums[i]==0){
                    countOfZero--;
                }
                i++;
            }
            length=max(length,j-i+1);
            j++;
        }
        return length-1; //excluding that one zero
    }
};