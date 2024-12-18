//https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/
class Solution {
public:
    bool isPossibleToDivide(vector<int>&nums,int mid,int maxOperations){
        int totalNumberOfOperation=0;
        for(int &x:nums){
            
             totalNumberOfOperation += (x + mid - 1) / mid - 1;
            
        }
        return totalNumberOfOperation<=maxOperations;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        

        int l=1;// because ball can be divided into only positive so 0 is not possible
        int r=*max_element(nums.begin(),nums.end()); //what can be the maxnumber of ball in bag

        while(l<=r){
            int mid=l+(r-l)/2;

            if(isPossibleToDivide(nums,mid,maxOperations)){
                r=mid-1;
            }
            else l=mid+1;
        }
        return l;

    }
};