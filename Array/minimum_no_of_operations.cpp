//https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int n=boxes.size();
        vector<int>answer(n,0);

        for(int i=0;i<n;i++){
            int numberOfMoves=0;
            for(int j=0;j<n;j++){
               if(boxes[j]=='1'){
                   numberOfMoves+=abs(j-i);
               }
            }
            answer[i]=numberOfMoves;
        }
        return answer;
    }
};