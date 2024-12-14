//https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        int m = mat.size();
        int n = mat[0].size();
        vector<pair<int, int>> vec;

        for (int i = 0; i < m; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum += mat[i][j];
            }
            vec.push_back({sum, i});
        }
        vector<int> ans;
        sort(vec.begin(), vec.end());
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};