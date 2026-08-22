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
        if(!root) return 0;
        int lft = dfs(root->left);
        int rgt = dfs(root->right);
        if(lft && rgt) return min(lft, rgt)+1;
        else if(lft && !rgt) return lft+1;
        else return rgt+1;
    }
    int minDepth(TreeNode* root) {
        return dfs(root);
    }
};