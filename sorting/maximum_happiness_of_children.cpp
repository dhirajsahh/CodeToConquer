//https://leetcode.com/problems/maximize-happiness-of-selected-children/description/
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        int n=happiness.size();
        sort(happiness.begin(),happiness.end());
        int count=0;
        long long ans=happiness[n-1];
        if(k==1) return ans;
        k--;
        for(int i=n-2;i>=0;i--){
            count++;
            ans+=((happiness[i]-count)>0)?(happiness[i]-count):0;
            k--;
            if(k==0){
                break;
            }
        }
        return ans;
    }
};