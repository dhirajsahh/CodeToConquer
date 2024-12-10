//https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        
       int n=nums.size();
       //finding the first positvie idx;
        int firstPositiveIdx=findPositiveIdx(nums,n);
        cout<<firstPositiveIdx<<endl;
        int noOfPostive=n-firstPositiveIdx;
        int lastNegativeIdx=findNegativeIdx(nums,n);
        cout<<lastNegativeIdx<<endl;
        int noOfNegative=lastNegativeIdx-0+1;
        return max(noOfPostive,noOfNegative);
    }
    int findPositiveIdx(vector<int>&nums,int n){
        int l=0;
        int r=n-1;
        int ans=0;
        bool foundPositive=false;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]<1){
                l=mid+1;
            } else{
                ans=mid;
                foundPositive=true;
                r=mid-1;
            }
        }
        if(!foundPositive) return n;
        return ans;
    }
    int findNegativeIdx(vector<int>&nums,int n){
        int l=0;
        int r=n-1;
        int ans=0;
        bool foundNegative=false;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]<0){
                ans=mid;
                foundNegative=true;
                l=mid+1;
            } else{
                r=mid-1;
            }
        }
        if(!foundNegative) return -1;
        return ans;
    }
};