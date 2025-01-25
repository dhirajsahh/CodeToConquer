//https://leetcode.com/problems/keys-and-rooms/description/
//using BFS
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();

        vector<vector<int>> adjList(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < rooms[i].size(); j++) {
                adjList[i].push_back(rooms[i][j]);
            }
        }
        vector<bool> isVisited(n, false);
        queue<int> que;
        que.push(0);
        isVisited[0]=true;
        while (!que.empty()) {
            int u = que.front();
            que.pop();
            for(int &v:adjList[u]){
                if(!isVisited[v]){
                  que.push(v);
                  isVisited[v]=true;
                }
            }
        }

        if (canReachAllRooms(isVisited)) {
            return true;
        }
        return false;
    }

    bool canReachAllRooms(vector<bool>& isVisited) {
        int n = isVisited.size();
        for (int i = 0; i < n; i++) {
            if (isVisited[i] == false) {
                return false;
            }
        }
        return true;
    }
};
//usingDFS
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();

        vector<vector<int>> adjList(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < rooms[i].size(); j++) {
                adjList[i].push_back(rooms[i][j]);
            }
        }
        vector<bool> isVisited(n, false);
        DFS(0, adjList, isVisited);
        if (canReachAllRooms(isVisited)) {
            return true;
        }
        return false;
    }
    void DFS(int u, vector<vector<int>>& adjList, vector<bool>&isVisited) {

        isVisited[u] = true;
        for (int& v : adjList[u]) {
            if (isVisited[v] == false) {
                DFS(v, adjList, isVisited);
            }
        }
    }
    bool canReachAllRooms(vector<bool>&isVisited) {
        int n = isVisited.size();
        for (int i = 0; i < n; i++) {
            if (isVisited[i] == false) {
                return false;
            }
        }
        return true;
    }
};