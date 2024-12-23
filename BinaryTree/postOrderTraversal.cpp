// https://leetcode.com/problems/binary-tree-postorder-traversal/description/

class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {

        vector<int> result;
        findPostOrder(root, result);
        return result;
    }
    void findPostOrder(TreeNode *root, vector<int> &result)
    {

        if (root == NULL)
        {
            return;
        }
        findPostOrder(root->left, result);
        findPostOrder(root->right, result);
        result.push_back(root->val);
    }
};