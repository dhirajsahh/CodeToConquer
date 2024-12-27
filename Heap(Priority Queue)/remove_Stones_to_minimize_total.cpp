//https://leetcode.com/problems/remove-stones-to-minimize-the-total/description/
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n=piles.size();

        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(piles[i]);
        }
        while(k--){
           int maxElement=pq.top();
           pq.pop();
           int remaining=maxElement-(maxElement/2);
           pq.push(remaining);
        }
        int sum=0;
        while(!pq.empty()){
             sum+=pq.top();
             pq.pop();
        }
        return sum;
    }
};