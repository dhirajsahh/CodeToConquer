//https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/description/
class Solution {
public:
    long long findScore(vector<int>& nums) {

        int n = nums.size();
        priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>>pq;
        unordered_set<int>st;
        for (int i = 0; i < n; i++) {
            pq.push({nums[i], i});
        }
        long long score = 0;
        vector<int> markedIndex;
        while (!pq.empty()) {
            
            pair<int, int> topPair = pq.top();
            pq.pop();
            int val = topPair.first;
            int index = topPair.second;
          //  cout<<val<<index;
            if (st.find(index)==st.end()) {  //not found then 
                score += val;
                st.insert(index);
                if (index < n - 1) {
                    st.insert(index + 1);
                }
                if (index > 0) {
                    st.insert(index - 1);
                }
            }
        }
        return score;
    }
};