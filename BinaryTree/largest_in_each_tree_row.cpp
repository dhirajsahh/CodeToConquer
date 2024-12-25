//https://leetcode.com/problems/find-largest-value-in-each-tree-row/description/

class Solution {
public:
    void BFS(TreeNode* root, vector<int>& result) {

        queue<TreeNode*> que;
        que.push(root);
        TreeNode* node = NULL;
        while (!que.empty()) {
            int n = que.size();
            int maxElement = INT_MIN;
            while (n--) {
                node = que.front();
                que.pop();
                maxElement = max(maxElement, node->val);

                if (node->left != NULL) {
                    que.push(node->left);
                }
                if (node->right != NULL) {
                    que.push(node->right);
                }
            }
            result.push_back(maxElement);

        }
    }
    vector<int> largestValues(TreeNode* root) {
        if (root == NULL) {
            return {};
        }
        vector<int> result;
        BFS(root, result);
        return result;
    }
};