//https://leetcode.com/problems/subdomain-visit-count/description/
class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        
        int n=cpdomains.size();
        vector<string>ans;
        unordered_map<string,int>mp;
        for(string &s:cpdomains){
           string s1,s2;
           stringstream ss(s);
           ss>>s1>>s2;
           int n=stoi(s1);
           mp[s2]+=n;
           for(int i=0;i<s2.size();i++){
              if(s2[i]=='.'){
                string s3=s2.substr(i+1);
                mp[s3]+=n;
              }
           }
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            ans.push_back(to_string(it->second)+" "+(it->first));
        }
        return ans;
    }
};