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
    TreeNode* curr;
    void dfs(TreeNode* root){
        if(!root) return;

        dfs(root->left);
        root->left = NULL;
        curr->right = root;
        curr = root;

        dfs(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* temp = new TreeNode(0);
        curr = temp;
        dfs(root);
        return temp->right;
    }
};