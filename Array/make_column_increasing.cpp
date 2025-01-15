//https://leetcode.com/problems/minimum-operations-to-make-columns-strictly-increasing/
class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();
        int noOfOperations = 0;
        for (int j = 0; j < n; j++) {
            for (int i = 1; i < m; i++) {
                if (grid[i][j] <= grid[i - 1][j]) {
                    noOfOperations += (grid[i-1][j]-grid[i][j])+1;
                    grid[i][j]=grid[i-1][j]+1;
                }
            }
        }
        return noOfOperations;
    }
};