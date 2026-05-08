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
    int dfs(TreeNode* root, int& ans){
        if(!root)
        return 0;
        int lSum = max(dfs(root->left, ans), 0);
        int rSum = max(dfs(root->right, ans), 0);
        int totalSum = lSum + rSum + root->val;
        ans = max(ans, totalSum);
        return max(lSum, rSum) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        dfs(root, ans);
        return ans;
    }
};