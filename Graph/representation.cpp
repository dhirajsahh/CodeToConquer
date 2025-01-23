#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n,m;  //n nodes m edges
    cin>>n>>m;
    //adjacency matrix representation
    /*int adjmat[n+1][n+1]={0};
    for(int i=0;i<m;i++){
        int u;
        int v;
        cin>>u>>v;
        adjmat[u][v]=1;
        adjmat[v][u]=1;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u;
        int v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        cout<<"Node "<<i<<"-->"<<"{";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<"}";
        cout<<endl;
    }

}