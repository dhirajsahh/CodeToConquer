//https://leetcode.com/problems/find-champion-ii/description/
class Solution {
public:
    bool isAllNodesVisited(vector<bool>& isVisited) {
        for (bool x : isVisited) {
            if (x == false) {
                return false;
            }
        }
        return true;
    }
    int findChampion(int n, vector<vector<int>>& edges) {

        vector<vector<int>>adjList(n);
        for(vector<int>&vec:edges){
            int u=vec[0];
            int v=vec[1];
            adjList[u].push_back(v);
        }

        for (int i = 0; i < n; i++) {
            vector<bool> isVisited(n, false);
            DFS(i, isVisited, adjList);
            if (isAllNodesVisited(isVisited)) {
                return i;
            }
        }
        return -1;
    }
    void DFS(int u, vector<bool>& isVisited, vector<vector<int>>& adjList) {
        isVisited[u] =true;
        for (int v : adjList[u]) {
            if (!isVisited[v]) {
                DFS(v, isVisited, adjList);
            }
        }
    }
};