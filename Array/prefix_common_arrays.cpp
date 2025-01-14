//https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans(n);

        vector<bool> occurenceOfA(n + 1, false);
        vector<bool> occurenceOfB(n + 1, false);
        for (int i = 0; i < n; i++) {
            occurenceOfA[A[i]] = true;
            occurenceOfB[B[i]] = true;
            int count = 0;
            for (int i = 1; i <= n; i++) {
                if (occurenceOfA[i]==occurenceOfB[i] && occurenceOfA[i]==true) {
                    count++;
                }
            }
            ans[i] = count;
        }
        return ans;
    }
};