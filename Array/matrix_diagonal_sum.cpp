//https://leetcode.com/problems/matrix-diagonal-sum/

//Approach-1 
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int sum=0;
        for(int row=0,col=0;row<n&&col<n;row++,col++){
            sum+=mat[row][col];
        }
        for(int row=0,col=n-1;row<n&&col>=0;row++,col--){
            sum+=mat[row][col];
        }
        if(n%2==1){
            sum-=mat[n/2][n/2];
        }
        return sum;

    }
};
//Approach-2 using set
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        set<pair<int,int>>st;
        int sum=0;
        for(int row=0,col=0;row<n&&col<n;row++,col++){
            if(!st.count({row,col})){
                sum+=mat[row][col];
            }
            pair<int,int>p;
            p=make_pair(row,col);
            st.insert(p);
        }
        for(int row=0,col=n-1;row<n&&col>=0;row++,col--){
            if(!st.count({row,col})){
                sum+=mat[row][col];
            }
            pair<int,int>p;
            p=make_pair(row,col);
            st.insert(p);
        }
       
        return sum;
    }
};
