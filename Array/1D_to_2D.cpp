//https://leetcode.com/problems/convert-1d-array-into-2d-array/description/
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

        vector<vector<int>> result(m,vector<int>(n));
        int len=original.size();
        if(m*n!=len) return {};
        int k=0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                
                result[i][j] = original[k];
                k++;
            }
        }
        return result;
    }
};