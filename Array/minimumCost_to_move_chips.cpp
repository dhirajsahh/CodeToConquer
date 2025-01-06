//https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        
        int n=position.size();
        int minCost=INT_MAX;
        for(int i=0;i<n;i++){
            int costs=0;
            for(int j=0;j<n;j++){
                if(abs(position[j]-position[i])%2==0){
                    costs+=0;
                }
                else {
                    costs+=1;
                }
            }
            minCost=min(minCost,costs);
        }
        return minCost;
    }
};