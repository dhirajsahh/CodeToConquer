//https://leetcode.com/problems/sum-of-all-odd-length-subarrays/description/

//Approach 1 Bruteforce
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                if((j-i+1)%2==1){
                   ans+=sum;
                }
            }
        }
        return ans;
    }
};
//Approach-2
