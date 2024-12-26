//https://leetcode.com/problems/minimum-number-game/description/
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>arr;
        priority_queue<int,vector<int>,greater<int>>p;
        for(int &num:nums){
            p.push(num);
        }
        while(!p.empty()){
            int alicePickup=p.top();
            p.pop();
            int bobPickup=p.top();
            p.pop();
            arr.push_back(bobPickup);
            arr.push_back(alicePickup);
        }
        return arr;
    }
};