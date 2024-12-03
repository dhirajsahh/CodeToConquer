//https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/description/
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int>answer(n);
        int j=0;
        for(auto &query:queries){
            int x=query[0];
            int y=query[1];
            int r=query[2];
            answer[j++]=countNoOfPoint(x,y,r,points);
        }
        return answer;
    }
    int countNoOfPoint(int x1,int y1,int r,vector<vector<int>>& points){
        int count=0;
        for(auto &point:points){
            int x2=point[0];
            int y2=point[1];
            int distance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
            if(distance<=r*r) {
                count++;
            }
        }
        return count;
    }
};