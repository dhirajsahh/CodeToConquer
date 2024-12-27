//https://leetcode.com/problems/relative-ranks/description
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push({score[i],i});
        }
        vector<string>answer(n);
        while(!pq.empty()){
            int queueSize=pq.size();
            int k_th_position=n-pq.size()+1;
            int currTop=pq.top().first;
            int currTopIdx=pq.top().second;
            pq.pop();
            if(k_th_position==1){
                answer[currTopIdx]="Gold Medal";
            }
            else if(k_th_position==2){
                answer[currTopIdx]="Silver Medal";
            }
            else if(k_th_position==3) {
                answer[currTopIdx]="Bronze Medal";
            }
            else {
                answer[currTopIdx]=to_string(k_th_position);
            }

        }
        return answer;
    }
};