//https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
class Solution {
  public:
  
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        
       vector<int>bfsOrder;
       int n=adj.size();
       vector<bool>isVisted(n,false);
       queue<int>que;
            que.push(0);
            isVisted[0]=true; 
            
          
           while(!que.empty()){
               int node=que.front();
               que.pop();
               bfsOrder.push_back(node);
               for(int &v:adj[node]){
                   if(!isVisted[v]){
                       isVisted[v]=true;
                       que.push(v);
                   }
               }
               
           }
       
       return bfsOrder;
    }
};