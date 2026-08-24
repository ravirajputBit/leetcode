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
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> m;
        vector<TreeNode*> s;
        s.push_back(root);
        int mx = 0;
        while(!s.empty()){
            TreeNode* n = s.back();
            s.pop_back();
            m[n->val]++;
            if(mx < m[n->val]) mx = m[n->val];
            if(n->left) s.push_back(n->left);
            if(n->right) s.push_back(n->right);
        }

        vector<int> ans;
        for(auto& it : m){
            if(it.second == mx){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};