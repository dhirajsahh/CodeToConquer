//https://leetcode.com/problems/adding-spaces-to-a-string/description/

//Approach-1 
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=spaces.size();
        string ans=s.substr(0,spaces[0]);
        for(int i=1;i<n;i++){
            ans+=" ";
            ans+=s.substr(spaces[i-1],(spaces[i]-spaces[i-1]));
        }
        ans+=" ";
        ans+=s.substr(spaces[n-1]);
        return ans;
    }
};
//Approach-2 
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=s.length();
        int m=spaces.size();
        string result="";
        int i=0;
        int j=0;
        while(i<n){
            if(j<m && i==spaces[j]){
                result+=" ";
                j++;
            }
            result+=s[i];
            i++;
        }
        return result;
    }
};