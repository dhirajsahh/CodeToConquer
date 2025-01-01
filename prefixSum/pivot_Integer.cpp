//https://leetcode.com/problems/find-the-pivot-integer/description/

//Approach-1
class Solution {
public:
    int pivotInteger(int n) {

        vector<int> leftSum(n + 1);
        vector<int> rightSum(n + 1);
        int sum = 0;

        for (int i = 1; i <= n; i++) {
            sum += i;
            leftSum[i] = sum;
        }
        sum = 0;

        for (int i = n; i >= 1; i--) {
            sum += i;
            rightSum[i] = sum;
        }

        for (int i = 1; i <=n; i++) {
            if (leftSum[i] == rightSum[i]) {
                return i;
            }
        }
        return -1;
    }
};
//Approach-2
class Solution {
public:
    
    int pivotInteger(int n) {
        
        int totalSum=n*(n+1)/2;

        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
            int remaingSum=totalSum-sum+i;
            if(remaingSum==sum)
            return i;
        }
        return -1;
    }
};