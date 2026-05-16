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
    int dfs(TreeNode* root){
        if(root == NULL)
        return 0;
        int lH = dfs(root->left);
        int rH = dfs(root->right);
        return max(lH, rH)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int currD = dfs(root->left) + dfs(root->right);
        int lD = diameterOfBinaryTree(root->left);
        int rD = diameterOfBinaryTree(root->right);
        int f = max(lD, rD);
        return max(currD, f);
    }
};