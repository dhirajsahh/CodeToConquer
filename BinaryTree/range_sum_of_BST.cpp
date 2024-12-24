//https://leetcode.com/problems/range-sum-of-bst/description/

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        findSum(root,low,high,sum);
        return sum;
    }
    void findSum(TreeNode *root,int low,int high,int &sum){
        if(root==NULL){
            return;
        }
        int val=root->val;
        if(val>=low&&val<=high){
            sum+=val;
        }
        findSum(root->left,low,high,sum);
        findSum(root->right,low,high,sum);
    }
};