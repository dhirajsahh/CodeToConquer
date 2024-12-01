//https://leetcode.com/problems/check-if-n-and-its-double-exist/description/

//Approach-1 
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i&&arr[i]==2*arr[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
//Approach-2 
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int  n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.count(2*arr[i])) return true;
            else if(arr[i]%2==0 &&mp.count(arr[i]/2)) return true;
            mp[arr[i]]++;
        }
        return false;
    }
};
//Approach-3
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            int l=0;
            int r=n-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(arr[mid]==2*arr[i]&&mid!=i){
                    return true;
                }
                else if(arr[mid]<2*arr[i]){
                    l=mid+1;
                } else {
                    r=mid-1;
                }
            }
        }
        return false;
    }
};