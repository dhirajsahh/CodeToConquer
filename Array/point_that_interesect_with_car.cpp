//https://leetcode.com/problems/points-that-intersect-with-cars/description/
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        
        vector<bool>isCovered(101,false);

        for(vector<int>&v:nums){
            int start=v[0];
            int end=v[1];
            for(int i=start;i<=end;i++){
                isCovered[i]=true;
            }
        }
        int noOfInteger=0;
        for(int i=1;i<=101;i++){
            if(isCovered[i]){
                noOfInteger++;
            }
        }
        return noOfInteger;

    }
};