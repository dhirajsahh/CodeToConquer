//https://leetcode.com/problems/shortest-distance-to-a-character/description/
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {

        int n = s.length();
        unordered_set<int> st;
        vector<int> answer(n);
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                st.insert(i);
            }
        }
        for(int i=0;i<n;i++){
            int minValue=INT_MAX;
            for(auto it=st.begin();it!=st.end();it++){
                minValue=min(minValue,abs(i-*it));
            }
            answer[i]=minValue;
        }
        return answer;
    }
};