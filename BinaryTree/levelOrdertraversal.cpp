//https://leetcode.com/problems/binary-tree-level-order-traversal/description/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;

        if(root==NULL){
            return {};
        }
        queue<TreeNode*>que;
        que.push(root);
        while(!que.empty()){
            int n=que.size();
            TreeNode* node=NULL;
            vector<int>sameLevelNode;
            while(n--){

               node=que.front();
               sameLevelNode.push_back(node->val);
               que.pop();
               if(node->left!=NULL){
                que.push(node->left);
               }
               if(node->right!=NULL){
                que.push(node->right);
               }
            }
            result.push_back(sameLevelNode);
        }
        return result;
    }
};