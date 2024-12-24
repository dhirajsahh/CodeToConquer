//https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

class Solution {
public:
    int maxDepth(TreeNode* root) {

        if (root == NULL){
            return 0;
        }
        int count = 0;
        BFS(root, count);
        return count;
    }
    void BFS(TreeNode* root, int& count) {

        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty()) {
            int n = que.size();
            TreeNode* node = NULL;
            while (n--) {
                node = que.front();
                que.pop();
                if (node->left != NULL) {
                    que.push(node->left);
                }
                if (node->right != NULL) {
                    que.push(node->right);
                }
            }
            count++;
        }
    }
};