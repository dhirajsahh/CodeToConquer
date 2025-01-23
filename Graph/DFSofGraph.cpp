//https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
       
       vector<int>dfsOrder;
       int n=adj.size();
       vector<bool>isVisted(n,false);
       isVisted[0]=true;
       dfsHelper(0,adj,dfsOrder,isVisted);
       return dfsOrder;
    }
    void dfsHelper(int u,vector<vector<int>>&adj,vector<int>&dfsOrder,vector<bool>&isVisted){
        // if(adj[u].size()==0){
        //     return;
        // }
        dfsOrder.push_back(u);
        for(int &v:adj[u]){
            if(isVisted[v]==false){
                isVisted[v]=true;
                dfsHelper(v,adj,dfsOrder,isVisted);
            }
        }
    }
};