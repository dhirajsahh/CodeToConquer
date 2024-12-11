//https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/submissions/1475683105/?envType=daily-question&envId=2024-12-11
class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;

        sort(nums.begin(),nums.end());
        int ans=0;
        while(j<n){
            
            
            while(nums[j]-nums[i]>2*k){
                i++;
            }
            ans=max(ans,j-i+1);
            
            j++;

        }
        return ans;
    }
};