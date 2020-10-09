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
    void lvlorder(TreeNode* root, int level,map<int,int> &value){
        if (!root) return;
        value[level]+=root->val;
        lvlorder(root->left,level+1,value);
        lvlorder(root->right,level+1,value);
    }
public:
    int maxLevelSum(TreeNode* root) {
        map<int,int> value;
        lvlorder(root,1,value);
        int mx = INT_MIN,res = 0;
        int n = value.size();
        for(int i = 0;i<n;i++){
            if (value[i+1]>mx){
                mx = value[i+1];
                res = i+1;
            }
        }
        return res;
    }
};