//https://leetcode.com/problems/find-indices-of-stable-mountains/description/
class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        
        int n=height.size();
        vector<int>result;

        for(int i=1;i<n;i++){
            if(height[i-1]>threshold){
                result.push_back(i);
            }
        }
        return result;
    }
};