//https://leetcode.com/problems/points-that-intersect-with-cars/description/

//Approach 1
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
//Approach-2
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());

        vector<vector<int>>result;
        result.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(result.back()[1]>=nums[i][0]){
                int start=result.back()[0];
                int end=max(nums[i][1],result.back()[1]);
                result.pop_back();
                vector<int>newInterval={start,end};
                result.push_back(newInterval);
            }
            else {
                result.push_back(nums[i]);
            }
        }
        int count=0;
        for(vector<int>&v:result){
            count+=v[1]-v[0]+1;
        }
        return count;
    }
};