//https://leetcode.com/problems/flood-fill/
class Solution {
public:
     vector<vector<int>>directions{{-1,0},{1,0},{0,-1},{0,1}};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int colorOfStarting=image[sr][sc];
        if (colorOfStarting == color) {
            return image;
        }
        dfs(sr,sc,image,colorOfStarting,color);
        return image;
    }
    void dfs(int i,int j,vector<vector<int>>&image,int colorOfStarting,int color){
        if(i<0||j<0||i>=image.size()||j>=image[0].size()||image[i][j]!=colorOfStarting){
            return;
        }
        image[i][j]=color;
        dfs(i+1,j,image,colorOfStarting,color);
        dfs(i-1,j,image,colorOfStarting,color);
        dfs(i,j-1,image,colorOfStarting,color);
        dfs(i,j+1,image,colorOfStarting,color);
       
    }
};