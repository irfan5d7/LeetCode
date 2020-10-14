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
    pair<int,TreeNode*> findRoot(TreeNode* node){
        if(node == NULL) return {0,NULL};
        pair<int,TreeNode*> leftTree = findRoot(node->left);
        pair<int,TreeNode*> rightTree = findRoot(node->right);
        int leftlen = leftTree.first,rightlen = rightTree.first;
        return {1+max(leftlen,rightlen), leftlen==rightlen ? node: leftlen > rightlen ? leftTree.second: rightTree.second};
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
         pair<int, TreeNode*> res = findRoot(root);
        return res.second;
    }
};