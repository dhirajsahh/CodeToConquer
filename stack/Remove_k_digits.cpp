//https://leetcode.com/problems/remove-k-digits/description/
class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        if(n==k) return "0";
        string result;
        result.push_back(num[0]);
        for (int i = 1; i < n; i++) {

            while(!result.empty()&& num[i]<result.back()&&k>0){
                result.pop_back();
                k--;
            }
            result.push_back(num[i]);
        }
        
        int m=result.size();
        int i=0;
        if(k>0){
            result.erase(m-k);
        }
        while(i<m &&result[i]=='0'){
            result.erase(i,1);
        }
        if(result.empty()) return "0";
        return result;
    }
};