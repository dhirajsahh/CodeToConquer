//https://leetcode.com/problems/bitwise-xor-of-all-pairings/description
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();
        if (n1 % 2 == 0 && n2 % 2 == 0) {
            return 0;
        }
        int xorResult = 0;
        if (n1 % 2 == 1 && n2 % 2 == 1) {
            for (int i = 0; i < n1; i++) {
                xorResult = (xorResult ^ nums1[i]);
            }
            for (int i = 0; i < n2; i++) {
                xorResult = (xorResult ^ nums2[i]);
            }
            return xorResult;
        } else {
            if (n1 % 2 == 0) {
                for (int i = 0; i < n1; i++) {
                    xorResult = (xorResult ^ nums1[i]);
                }
                return xorResult;
            }

            else {
                for (int i = 0; i < n2; i++) {
                    xorResult = (xorResult ^ nums2[i]);
                }
                return xorResult;
            }
        }
         return xorResult;
    }

}
;