//https://leetcode.com/contest/weekly-contest-428/problems/button-with-longest-push-time/
class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {

        int m=events.size();

        int index=events[0][0];
        int time=events[0][1];

        for(int i=1;i<m;i++){
            int curTime=events[i][1]-events[i-1][1];
            if(curTime>time){
                index=events[i][0];
                time=curTime;
            }
            else if(curTime==time){
                index=min(index,events[i][0]);
            }
        }
        return index;
    }
};