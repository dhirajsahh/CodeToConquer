//https://leetcode.com/problems/find-target-indices-after-sorting-array/description/
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> result;
        sort(nums.begin(), nums.end());

        int firstIndex = findFirstIndex(nums, target);
        int lastIndex = findLastIndex(nums, target);
        if(firstIndex==-1||lastIndex==n) return result;
        for (int i = firstIndex; i <= lastIndex; i++) {
            result.push_back(i);
        }
        return result;
    }
    int findFirstIndex(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                ans = mid;
                r = mid - 1;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else
                r = mid - 1;
        }
        return ans;
    }
    int findLastIndex(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int ans = nums.size();
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                ans = mid;
                l=mid+1;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else
                r = mid - 1;
        }
        return ans;
    }
};