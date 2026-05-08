/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root, int maxx, int minn){
        if(!root)
        return abs(maxx-minn);
        int L = dfs(root->left, max(maxx, root->val), min(minn, root->val));
        int R = dfs(root->right, max(maxx, root->val), min(minn, root->val));
        return max(L, R);
    }
    int maxAncestorDiff(TreeNode* root) {
        int maxx = INT_MIN;
        int minn = INT_MAX;
        return dfs(root, maxx, minn);
    }
};