//https://leetcode.com/problems/maximum-tastiness-of-candy-basket/
class Solution {
public:
    bool isPossible(vector<int>&price,int currentDifference,int k){

        int prevCandies=price[0];
        int noOfCandies=1;
        for(int i=1;i<price.size();i++){
            int currCandies=price[i];
            if(currCandies-prevCandies>=currentDifference){
                noOfCandies++;
                prevCandies=currCandies;
            }
            if(noOfCandies==k){
                break;
            }
        }
        return noOfCandies==k;
    }
    int maximumTastiness(vector<int>& price, int k) {
        
        int n=price.size();

        sort(price.begin(),price.end());
        
        int minDifference=1;
        int maxDifference=price[n-1]-price[0];

        int result=0;
        while(minDifference<=maxDifference){
            int currentDifference=minDifference+(maxDifference-minDifference)/2;
            if(isPossible(price,currentDifference,k)){
                result=currentDifference;
                minDifference=currentDifference+1;
            }
            else {
                maxDifference=currentDifference-1;
            }
        }
        //return maxDifference;
        return result;
    }
};