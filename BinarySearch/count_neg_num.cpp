//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for (int i = 0; i < m; i++) {
            int ans = 0;
            int l = 0;
            int r = n - 1;
            bool foundNegative = false;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (grid[i][mid] >= 0) {
                    l = mid + 1;
                } else {
                    ans = mid;
                    foundNegative = true;
                    r = mid - 1;
                }
            }
            if (foundNegative) {
                count += n - ans;
            }
        }
        return count;
    }
};