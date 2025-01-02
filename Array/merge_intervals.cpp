//https://leetcode.com/problems/merge-intervals/description/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

      int n=intervals.size();
        sort(intervals.begin(),intervals.end());

        vector<vector<int>>result;
        result.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            if(result.back()[1]>=intervals[i][0]){
                int start=result.back()[0];
                int end=max(intervals[i][1],result.back()[1]);
                result.pop_back();
                vector<int>newInterval={start,end};
                result.push_back(newInterval);
            }
            else {
                result.push_back(intervals[i]);
            }
        } 
        return result;
    }
};