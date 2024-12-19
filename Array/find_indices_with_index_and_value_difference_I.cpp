//https://leetcode.com/problems/find-indices-with-index-and-value-difference-i/description/class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        
        int n=nums.size();
        vector<int>result(2,-1);
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(abs(j-i)>=indexDifference && abs(nums[i]-nums[j])>=valueDifference){
                    result[0]=i;
                    result[1]=j;
                    break;
                }
            }
        }
        return result;
    }
};