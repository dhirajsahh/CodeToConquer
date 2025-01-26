//https://leetcode.com/problems/rotting-oranges/
class Solution {
public:
    vector<vector<int>> directions{{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int orangesRotting(vector<vector<int>>& grid) {

        typedef pair<int, int> P;
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        queue<P> que;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    que.push({i, j});
                } else if (grid[i][j] == 1) {
                    count++;
                }
            }
        }
        if (count == 0 ) {
            return 0;
        }
        int minutes = 0;
        while (!que.empty()) {

            int N = que.size();
            while (N--) {
                P curr=que.front();
                que.pop();
                for(vector<int>&vec:directions){
                    int new_x=curr.first+vec[0];
                    int new_y=curr.second+vec[1];
                    if(new_x>=0 &&new_x<m &&new_y>=0&&new_y<n&&grid[new_x][new_y]==1){
                        grid[new_x][new_y]=2;
                        que.push({new_x,new_y});
                        count--;

                    }

                }
                
            }
            minutes++;
            
        }
        return count==0?minutes-1:-1;
    }
};