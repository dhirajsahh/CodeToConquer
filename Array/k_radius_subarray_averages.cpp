class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        
        int n=nums.size();
        vector<long long>prefixSum(n);
        prefixSum[0]=nums[0];
        long long sum=0;
        for(int i=1;i<n;i++){

            prefixSum[i]=prefixSum[i-1]+nums[i];
        }
        vector<int>result(n);
        for(int i=0;i<n;i++){
            if((i-k<0)||(i+k)>=n){
                result[i]=-1;
            }
            
            else {

                long long  rightSum=prefixSum[i+k];
                long long leftSum=(i-k-1)>=0?prefixSum[i-k-1]:0;
                sum=rightSum-leftSum;
                result[i]=sum/(2*k+1);
            }
        }
        return result;
    }
};