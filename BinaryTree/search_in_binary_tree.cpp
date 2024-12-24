//https://leetcode.com/problems/search-in-a-binary-search-tree/

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {

        if (root == NULL) {
            return NULL;
        }
        TreeNode* node = NULL;
        searchBST_Helper(root, node, val);
        return node;
    }
    void searchBST_Helper(TreeNode* root, TreeNode*& node, int val) {
        if (root == NULL) {
            return;
        }
        if (root->val == val) {
            node = root;
            return;
        }
        searchBST_Helper(root->left, node, val);
        searchBST_Helper(root->right, node, val);
    }
};