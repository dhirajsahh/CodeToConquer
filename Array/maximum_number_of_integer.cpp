//https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/description/
class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {

        int count = 0;
        int sum = 0;
        int m = banned.size();
        sort(banned.begin(), banned.end());
        int j = 0;
        for (int i = 1; i <= n; i++) {
            while (j + 1 < m && banned[j] == banned[j + 1]) {
                j++;
            }
            if (i == banned[j]) {
                if (m > 1) {
                    j++;
                }
                continue;
            }
            sum += i;

            if (sum > maxSum) {
                break;
            }
            count++;
        }
        return count;
    }
};