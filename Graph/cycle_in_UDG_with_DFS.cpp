//https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(vector<vector<int>>& adj) {
        
        int n=adj.size();
        vector<bool>isVisited(n,false);
        vector<vector<int>>mp(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<adj[i].size();j++){
                 mp[i].push_back(adj[i][j]);
            }
           
        }
        for(int i=0;i<n;i++){
            if(!isVisited[i]){
                if(checkCycleWithDFS(i,mp,-1,isVisited)){
                    return true;
                }
            }
        }
        return false;
    }
    bool checkCycleWithDFS(int u,vector<vector<int>>&mp,int parent,vector<bool>&isVisited){
        
        isVisited[u]=true;
        for(int &v:mp[u]){
            if(v==parent){ //parent tira na jane
                continue;
            }
             if(v!=parent && isVisited[v]==true){ // not parent and even true
                return true;
            }
            if(checkCycleWithDFS(v,mp,u,isVisited)==true){
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends