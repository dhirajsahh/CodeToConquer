//https://leetcode.com/problems/neither-minimum-nor-maximum/description/
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        if(n==1||n==2) return -1;

        int maxElement=INT_MIN;
        int minElement=INT_MAX;
        for(int &num:nums){
            maxElement=max(maxElement,num);
            minElement=min(minElement,num);
        }
        for(int &num:nums){
            if(num!=minElement && num!=maxElement){
                return num;
            }
        }
        return -1;
    }
};