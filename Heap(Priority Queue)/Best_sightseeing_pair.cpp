//https://leetcode.com/problems/best-sightseeing-pair/
//Approach-1
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        
        int n=values.size();
        priority_queue<int>pq;
        pq.push(values[0]+0);
        int score=0;
        for(int j=1;j<n;j++){
            int currScore=pq.top()+values[j]-j;
            score=max(score,currScore);
            pq.push(values[j]+j);
        }
        return score;
    }
};
//Approach-2
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        
        int n=values.size();
        int maxElement_plus_maxIndex=values[0]+0;
        int score=0;
        for(int j=1;j<n;j++){
            int currElement_plus_currIndex=values[j]+j;
            int currScore=maxElement_plus_maxIndex+values[j]-j;
            score=max(score,currScore);
            maxElement_plus_maxIndex=max(maxElement_plus_maxIndex,currElement_plus_currIndex);


        }
        return score;
    }
};