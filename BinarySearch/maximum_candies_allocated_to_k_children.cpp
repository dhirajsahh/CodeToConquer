//https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/
class Solution {
public:
    bool isPossible(vector<int>& candies,int mid,long long k){

        long long numberOfChildren=0;
        for(int &x:candies){
            numberOfChildren+=x/mid;
        }
        return numberOfChildren >=k;
    }

    int maximumCandies(vector<int>& candies, long long k) {
        
        int n=candies.size();

        long long l=1;
        long long r=*max_element(candies.begin(),candies.end());
        //long long ans=0;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(isPossible(candies,mid,k)){
                //ans=mid;
                l=mid+1;
            }
            else {
                r=mid-1;
            }
        }
        return r;
        //return ans;

    }
};