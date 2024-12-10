//https://leetcode.com/problems/arranging-coins/description/
//Approach 1 Binary searh
class Solution {
public:
    long long sum(long long num){
        return num*(num+1)/2;
    }
    int arrangeCoins(int n) {

        int l=1;
        int r=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(sum(mid)==n){
                return mid;
            }
            else if(sum(mid)<n){
                l=mid+1;
            }
            else {
                r=mid-1;
            }
        }
        return r;
    }
};
//Appraoch 2


class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (n == 0) {
                return count;
            }
            n=n-i;
            count++;
        }
        return count;
    }
};