//https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/description/

//Approach-1
class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size();

        int count = 0;
        for (int i = 0; i < n; i++) {
            bool foundSmaller = false;
            bool foundBigger = false;
            for (int j = 0; j < n; j++) {
                if (nums[j] < nums[i]) {
                    foundSmaller = true;
                }
                if (nums[i] < nums[j]) {
                    foundBigger = true;
                }
            }
            if (foundSmaller && foundBigger) {
                count++;
            }
        }
        return count;
    }
};
//Approach-2
class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int smallerValue=nums[0];
        int largerValue=nums[n-1];
        int count=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]!=smallerValue&&nums[i]!=largerValue){
                count++;
            }
        }
        return count;
    }
};