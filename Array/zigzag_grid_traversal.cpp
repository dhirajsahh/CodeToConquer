//https://leetcode.com/contest/weekly-contest-432/problems/zigzag-grid-traversal-with-skip/
class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {

        int m=grid.size();
        int n=grid[0].size();
        vector<int>onedArray;
        bool leftTravel=false;
        for(int i=0;i<m;i++){
            if(leftTravel){
                for(int j=n-1;j>=0;j--){
                    onedArray.push_back(grid[i][j]);
                }
                leftTravel=!leftTravel;
            }
            else {
                for(int j=0;j<n;j++){
                     onedArray.push_back(grid[i][j]);
                }
                leftTravel=!leftTravel;
            }
        }
        vector<int>ans;
        for(int i=0;i<onedArray.size();i+=2){
            ans.push_back(onedArray[i]);
        }
        return ans;
        
    }
};