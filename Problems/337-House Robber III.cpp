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
    vector<int> treeDp (TreeNode* node)
    {
        vector<int> res(2,0);
        if (!node) return res;
        vector<int> left = treeDp(node->left);
        vector<int> right = treeDp(node->right);
        res[0] = max(left[0],left[1]) + max(right[0],right[1]);
        res[1] = node->val+left[0] + right[0];
        return res;
    }
    int rob(TreeNode* root) {
        if(!root) return 0;
        vector<int> res = treeDp(root);
        return max(res[0],res[1]);
    }
};