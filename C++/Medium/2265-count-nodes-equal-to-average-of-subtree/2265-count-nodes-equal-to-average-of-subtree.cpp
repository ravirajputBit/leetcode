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
    pair<int, int> dfs(TreeNode* node, int &cnt){
        if(!node) return {0, 0};
        pair<int, int> lft = dfs(node->left, cnt);
        pair<int, int> rgt = dfs(node->right, cnt);
        int sum = node->val+lft.first+rgt.first;
        int n = lft.second+rgt.second+1;
        if(sum/n == node->val) cnt++;
        return {sum, n};
    }
    int averageOfSubtree(TreeNode* root) {
        int cnt = 0;
        dfs(root, cnt);
        return cnt;
    }
};