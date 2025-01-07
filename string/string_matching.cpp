//https://leetcode.com/problems/string-matching-in-an-array
//Approach-1
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        
        int n=words.size();
        vector<string>ans;
        unordered_set<string>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int m=words[j].length();
                for(int k=0;k<words[i].size();k++){
                    if(j!=i && words[i].substr(k,m)==words[j]){
                        st.insert(words[j]);
                    }
                }
            }
        }
        for(auto it=st.begin();it!=st.end();it++){
            ans.push_back(*it);
        }
        return ans;
    }
};
//Approach-2
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        
        int n=words.size();
        vector<string>ans;
        unordered_set<string>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i && words[i].find(words[j])!=string::npos){   //words of i vitra words of j xa 
                    st.insert(words[j]);
                }
            }
        }
        for(auto it=st.begin();it!=st.end();it++){
            ans.push_back(*it);
        }
        return ans;
    }
};