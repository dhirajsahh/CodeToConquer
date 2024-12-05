//https://leetcode.com/problems/get-equal-substrings-within-budget/description/
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.length();

        int i=0;
        int j=0;
        int maxLength=0;
        int cost=0;
        while(j<n){
            cost+=abs(t[j]-s[j]);
            while(cost>maxCost){
               cost-=abs(t[i]-s[i]);
               i++;
            }
            maxLength=max(maxLength,j-i+1);
            j++;
        }
        return maxLength;
    }
};