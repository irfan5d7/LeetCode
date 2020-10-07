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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* node = new TreeNode(val);
        if (!root)
            return node;
        TreeNode* temp = root;
        while(1)
        {
            if (val > temp->val)
            {
                if(!temp->right)
                {
                    
                    temp->right = node;
                    return root;
                }
                temp = temp->right;
            }
            else
            {
                if(!temp->left)
                {
                    temp->left = node;
                    return root;
                }
                temp = temp->left;
            }
        }
        return root;
    }
};