//https://leetcode.com/problems/fair-candy-swap/description/

//Approach 1 using Binary search
class Solution {
public:
        /*
            AliceSum=bobSum after exchanging
             Sa-x+y=Sb-y+x
        */
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int m=aliceSizes.size();
        int n=bobSizes.size();
        vector<int>result(2);
        int sumA=0;
        int sumB=0;
        for(int i=0;i<m;i++){
            sumA+=aliceSizes[i];
        }
        for(int j=0;j<n;j++){
            sumB+=bobSizes[j];
        }
        int delta=(sumB-sumA)/2;
        sort(bobSizes.begin(),bobSizes.end());
        for(int &x:aliceSizes){
            int target=x+delta;
            if(findTarget(target,bobSizes)){
                result[0]=x;
                result[1]=x+delta;
                break;
            }
        }
        return result;
    }
    bool findTarget(int target,vector<int>&bobSizes){
        int l=0;
        int r=bobSizes.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(bobSizes[mid]==target){
                return true;
            }
            else if(bobSizes[mid]>target){
                r=mid-1;
            }
            else l=mid+1;
        }
        return false;
    }

};
//Appr-2
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        /*
            AliceSum=bobSum after exchanging
             Sa-x+y=Sb-y+x
        */
        long long aliceSum = 0;
        long long bobSum = 0;
        int m = aliceSizes.size();
        int n = bobSizes.size();
        for (int i = 0; i < m; i++) {
            aliceSum += aliceSizes[i];
        }
        for (int j = 0; j < n; j++) {
            bobSum += bobSizes[j];
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[bobSizes[i]]++;
        }
        vector<int> result(2);
        int delta = (aliceSum - bobSum) / 2;
        for (int i = 0; i < m; i++) {
            if (mp.count(aliceSizes[i] - delta)) {
                result[0] = aliceSizes[i];
                result[1] = (aliceSizes[i] - delta);
                break;
            }
        }
        return result;
    }
};