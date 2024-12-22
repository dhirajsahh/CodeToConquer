//https://leetcode.com/problems/number-of-visible-people-in-a-queue/description/
class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        
        int n=heights.size();

        vector<int>result(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            
            int count=0;
            while(!st.empty()&&st.top()<=heights[i]){
                st.pop();
                count++;
            }
            if(st.empty()){
                result[i]=count;
            }
            else {
                result[i]=count+1;
            }
            st.push(heights[i]);
        }
        return result;
    }
};