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