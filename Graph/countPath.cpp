//https://www.geeksforgeeks.org/problems/count-the-paths4332/1
class Solution {
  public:
    int count=0;
    int possible_paths(vector<vector<int>> &edges, int n, int start, int destination) {
        
        vector<vector<int>>adjList(n);
        for(vector<int>&vec:edges){
            int u=vec[0];
            int v=vec[1];
            adjList[u].push_back(v);
        }
        dfs(adjList,start,destination);
        return count;
    }
    void dfs(vector<vector<int>>&adjList,int start,int destination){
        
        if(start==destination){
            count++;
            return;
        }
        for(int &it:adjList[start]){
            
            dfs(adjList,it,destination);
        }
    }
};