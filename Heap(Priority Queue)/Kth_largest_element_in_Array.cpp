//https://leetcode.com/problems/kth-largest-element-in-an-array/description
 // Approach-1
 class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n-k];
    }
};
//Approach-2
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int n= nums.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        while(k!=1&&!pq.empty()){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};