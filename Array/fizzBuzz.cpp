//https://leetcode.com/problems/fizz-buzz/description/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n+1);
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                ans[i]="FizzBuzz";
            } else if (i % 3 == 0) {
                ans[i]="Fizz";
            } else if (i % 5 == 0) {
                ans[i]="Buzz";
            } else {
                ans[i]=to_string(i);
            }
        }
        vector<string>answer;
        for(int i=1;i<=n;i++){
            answer.push_back(ans[i]);
        }
        return answer;
    }
};