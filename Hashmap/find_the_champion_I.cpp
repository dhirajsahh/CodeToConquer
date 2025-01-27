//https://leetcode.com/problems/find-champion-i/description/
class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {

        int n = grid.size();

        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1 && i != j) {
                    mp[i]++;
                }
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==n-1){
                return it->first;
            }
        }
        return -1;
    }
};