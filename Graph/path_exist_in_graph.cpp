//https://leetcode.com/problems/find-if-path-exists-in-graph/
 // using BFS
 class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source,int destination) {

        if (source == destination) {
            return true;
        }
        vector<vector<int>> adjList(n);
        for (vector<int>& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        vector<bool> isVisited(n, false);
        queue<int> que;
        que.push(source);
        isVisited[source] = true;
        while (!que.empty()) {
            int u = que.front();
            que.pop();
            for (int& V : adjList[u]) {
                if (V == destination) {
                    return true;
                }
                if (!isVisited[V]) {
                    que.push(V);
                    isVisited[V] = true;
                }
            }
        }
        return false;
    }
};
// using DFS
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source,int destination) {

        vector<vector<int>> adjList(n);
        for (vector<int>& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        vector<bool> isVisited(n, false);
        if (DFS(source, destination, adjList, isVisited)) {
            return true;
        }
        return false;
    }
    bool DFS(int source, int destination, vector<vector<int>>& adjList, vector<bool>&isVisited) {
        if (source == destination) {
            return true;
        }
        isVisited[source] = true;
        for (int& v : adjList[source]) {
            if (!isVisited[v]) {
                if (DFS(v, destination, adjList, isVisited)) {
                    return true;
                }
            }
        }
        return false;
    }
};