// https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/description/
class Solution {
public:
    bool allElement_is_zero(vector<int>& nums) {
        for (int& i : nums) {
            if (i != 0) {
                return false;
            }
        }
        return true;
    }
    int minimumOperations(vector<int>& nums) {

        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            priority_queue<int, vector<int>, greater<int>> p;
            for (int j = 0; j < n; j++) {
                if (nums[j] != 0) {
                    p.push(nums[j]);
                }
            }
            if (allElement_is_zero(nums)) {
                break;
            }
            int top = p.top();
            cout<<top;
            p.pop();

            for (int k = 0; k < n; k++) {
                if (nums[k] != 0) {
                    nums[k] = nums[k] - top;
                }
            }
            count++;
            
        }
        return count;
    }
};