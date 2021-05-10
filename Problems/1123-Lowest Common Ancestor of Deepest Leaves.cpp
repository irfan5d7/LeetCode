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
    pair<int,TreeNode*> lca(TreeNode* node){
        if(!node) return {0,NULL};
        pair<int,TreeNode*> l = lca(node->left);
        pair<int,TreeNode*> r = lca(node->right);
        
        return {1+max(l.first,r.first), l.first == r.first ? node : l.first > r.first ? l.second : r.second};
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return lca(root).second;
    }
};