//https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/
 //Next smaller element on right
class Solution {
public:

    void findDiscount(vector<int>& prices,vector<int>& discount){

        stack<int>st;
        int n=prices.size();

        for(int i=n-1;i>=0;i--){

            while(!st.empty()&&st.top()>prices[i]){
                st.pop();
            }
            if(st.empty()){
                discount[i]=0;
            }
            else {
                discount[i]=st.top();
            }
            st.push(prices[i]);
        }
    }
    vector<int> finalPrices(vector<int>& prices) {

        int n = prices.size();
        vector<int> discount(n);
        findDiscount(prices, discount);
        for (int i = 0; i < n; i++) {
            discount[i] = prices[i] - discount[i];
        }
        return discount;
    }
};