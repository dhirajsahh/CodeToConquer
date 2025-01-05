//https://leetcode.com/problems/shifting-letters/submissions/1497977572/class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        
        string ans="";
        int n=shifts.size();
        vector<long long>totalShiftCount(n,0);
        totalShiftCount[n-1]=shifts[n-1];
        for(int i=n-2;i>=0;i--){
            totalShiftCount[i]=shifts[i]+totalShiftCount[i+1];
        }
        for(int i=0;i<n;i++){
            ans.push_back('a'+(s[i]-'a'+totalShiftCount[i]+26)%26);
        }
        return ans;
    }
};