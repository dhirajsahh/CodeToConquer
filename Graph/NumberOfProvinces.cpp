//https://leetcode.com/problems/number-of-provinces/description/
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
 
        int n = isConnected.size();
        vector<vector<int>> adjList(n + 1);
        vector<bool>isVisited(n+1,false);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1) {
                    adjList[i + 1].push_back(j + 1);
                }
            }
        }
        int count = 0;
        for (int i = 1; i < adjList.size(); i++) {
            if (isVisited[i] == false) {
                count++;
                DFS(i, adjList, isVisited);
            }
        }

        return count;
    }
    void DFS(int start, vector<vector<int>>& adjList, vector<bool>& isVisited) {
        isVisited[start] = true;
        for (auto v : adjList[start]) {
            if (isVisited[v] == false) {
                DFS(v, adjList, isVisited);
            }
        }
    }
};