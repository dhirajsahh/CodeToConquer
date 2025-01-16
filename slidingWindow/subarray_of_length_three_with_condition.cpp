//https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/
//Approach-2
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