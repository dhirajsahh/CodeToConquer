//https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/description/
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        
        int n=words.size();
        string str1="";
        for(string word:words){
            str1+=word;
            if(str1==s){
                return true;
            }
        }
        return false;
    }
};