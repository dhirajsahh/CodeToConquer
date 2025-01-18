//https://leetcode.com/problems/sort-the-students-by-their-kth-score/description/
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        vector<vector<int>>ans;
        int m=score.size();
        int n=score[0].size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<m;i++){
            pq.push({score[i][k],i});
        }
        while(!pq.empty()){
            int maxScoreRow=pq.top().second;
            pq.pop();
            vector<int>row=score[maxScoreRow];
            ans.push_back(row);
        }
        return ans;
    }
};