/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int maxDepth = max(dfs(root->left), dfs(root->right)) + 1;
        return maxDepth;
    }
    int dfs(TreeNode* node) {
        if (node == NULL) return 0;
        int maxDepth = max(dfs(node->left), dfs(node->right)) + 1;
        return maxDepth;
    }
};