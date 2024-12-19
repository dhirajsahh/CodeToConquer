//https://leetcode.com/problems/h-index-ii/description/
class Solution {
public:
    bool isPossible(vector<int>&citations,int mid){
        int count=0;
        int n=citations.size();
        for(int i=0;i<n;i++){
            if(citations[i]>=mid){
                count=n-i;
                break;
            }
        }
        return count>=mid;
    }
    int hIndex(vector<int>& citations) {

        int n=citations.size();
        int l=1;
        int r=n;
       // int result=0;
        while(l<=r){
            int mid=l+(r-l)/2;

            if(isPossible(citations,mid)){
                //result=mid;
                l=mid+1;
            }
            else {
                r=mid-1;
            }

        }
       // return result;
        return r;
    }
};