//https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/
class Solution {
public:
    int maxScore(string s) {
        
        int n=s.size();
        int totalCount_of_One=0;
        int totalCount_of_zero=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                totalCount_of_One++;
            }
        }
        int score=0;
        int count_of_zero=0;
        for(int i=0;i<n-1;i++){
           if(s[i]=='0'){
            count_of_zero++;
           }
           else {
            totalCount_of_One--;
           }
           score=max(score,count_of_zero+totalCount_of_One);
        }
        return score;
    }
};