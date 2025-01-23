//https://www.geeksforgeeks.org/problems/mother-vertex/1
class Solution 
{   
    
    bool allNodesVisited(vector<bool>&isVisited){
        for(int i=0;i<isVisited.size();i++){
            if(isVisited[i]==false){
                return false;
            }
        }
        return true;
    }
    public:
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    vector<bool>isVisited(V,false);
	    int ans=-1;
	    for(int i=0;i<V;i++){
	        fill(isVisited.begin(), isVisited.end(), false); 
	         dfs(i,adj,isVisited);
	         if(allNodesVisited(isVisited)){
	             ans=i;
	             return ans;
	         }
	        
	    }
	    
	    return ans;
	}
	void dfs(int start, vector<int>adj[],vector<bool>&isVisited){
	    isVisited[start]=true;
	    for(int &v:adj[start] ){
	        if(isVisited[v]==false){
	             dfs(v,adj,isVisited);
	        }
	       
	    }
	}

};