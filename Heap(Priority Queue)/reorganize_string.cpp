//https://leetcode.com/problems/reorganize-string/description/
class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto &it:mp){
            pq.push({it.second,it.first});
        }
        string result="";

        while(!pq.empty()){
            pair<int,char>firstPair=pq.top();
            pq.pop();
            int freq=firstPair.first;
            char ch=firstPair.second;
            if(result.length()>0&& result[result.length()-1]==ch){
            
                 //second pair  if there is not second pair not possible
                 if(pq.empty()) return "";
                pair<int,char>secondPair=pq.top();
                pq.pop();
                int secondPairFreq=secondPair.first;
                char secondPairCh=secondPair.second;
                result+=secondPairCh;
                secondPairFreq--;
                if(secondPairFreq!=0){
                    pq.push({secondPairFreq,secondPairCh});
                }


            }
            else {
                result+=ch;
                freq--;
            }
            if(freq!=0){
                pq.push({freq,ch});
            }
            
        }
        return result;
    }
};