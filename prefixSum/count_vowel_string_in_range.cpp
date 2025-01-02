//https://leetcode.com/problems/count-vowel-strings-in-ranges/description/
class Solution {
public:
    bool checkStart_and_end(string s){
        int n=s.length();
        if((s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u')&&(s[n-1]=='a'||s[n-1]=='e'||s[n-1]=='i'||s[n-1]=='o'||s[n-1]=='u'))
        {
            return true;
        }
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {

        int m=words.size(); 
        int n=queries.size();
        vector<int>ans;
        vector<int>prefixCount(m);
        if(checkStart_and_end(words[0])){
            prefixCount[0]=1;
        }
        else prefixCount[0]=0;
        for(int i=1;i<m;i++){
            if(checkStart_and_end(words[i])){
                prefixCount[i]=prefixCount[i-1]+1;
            }
            else {
                prefixCount[i]=prefixCount[i-1];
            }
        }
        for(vector<int>&query: queries){
            int l=query[0];
            int r=query[1];
            if(l==0){
              ans.push_back(prefixCount[r]);
            }
            else {
                ans.push_back(prefixCount[r]-prefixCount[l-1]);
            }
        }
        return ans;
    }
};