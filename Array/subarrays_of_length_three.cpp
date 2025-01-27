//https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/description/
//Approach -1
class Solution {
public:
    int countSubarrays(vector<int>& nums) {

        int n = nums.size();
        int noOfsubArrays = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (j - i + 1 == 3) {
                    if ((nums[j] + nums[i]) * 2 == nums[j - 1]) {
                        noOfsubArrays++;
                    }
                } else if (j - i + 1 > 3) {
                    break;
                }
            }
        }
        return noOfsubArrays;
    }
}; 
//Approach 2
//sliding window 
class Solution {
public:
    int countSubarrays(vector<int>& nums) {

        int n = nums.size();
        int i = 0;
        int j = 0;
        int count = 0;
        while (j < n) {

            while (j - i + 1 > 3) {
                i++;
            }
            if (j - i + 1 == 3) {
                if ((nums[i] + nums[j]) * 2 == nums[j - 1]) {
                    count++;
                }
            }
            j++;
        }
        return count;
    }
};