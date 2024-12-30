//https://leetcode.com/problems/maximal-score-after-applying-k-operations/description/
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        
        long long score=0;
        int n=nums.size();
        priority_queue<int>pq;
        for(int &ele:nums){
            pq.push(ele);
        }
        for(int i=0;i<k;i++){
            int maxElement=pq.top();
            pq.pop();
            score+=maxElement;
            pq.push((maxElement+3-1)/3);  //ceil  x+divisor-1/divisor
        }
        return score;
    }
};