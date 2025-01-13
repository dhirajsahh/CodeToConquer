//https://leetcode.com/problems/minimum-length-of-string-after-operations/description
class Solution {
public:
    int minimumLength(string s) {
        
        int n=s.length();
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int count=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            int val=it->second;
            if(val<=2){
              count+=val;
            }
            else if(val%2==0){
                count+=2;
            }
            else count+=1;

        }
        return count;
    }
};