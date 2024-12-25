//https://leetcode.com/problems/last-stone-weight/description/
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        int n=stones.size();
        if(n==1) return stones[0];
        priority_queue<int>p;
        for(int i=0;i<n;i++){
            p.push(stones[i]);
        }
        while(p.size()>1 &&!p.empty()){

            int x=p.top();
            p.pop();
            int y=p.top();
            p.pop();
            if(x!=y){
                p.push(x-y);
            }
        }
        if(p.empty()) return 0;
        return p.top();

    }
};