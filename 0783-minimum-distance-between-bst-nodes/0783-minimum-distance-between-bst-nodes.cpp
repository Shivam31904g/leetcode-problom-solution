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
    TreeNode* prev=NULL;
    int help(TreeNode* root){
        if(root==NULL){
            return INT_MAX;
        }
        int ans=INT_MAX;
        if(root->left){
            int lt=help(root->left);
            ans=min(ans,lt);
        }
        if(prev!=NULL){
            ans=min(ans,root->val-prev->val);
        }
        prev=root;
        if(root->right){
            int ri=help(root->right);
            ans=min(ans,ri);
        }
        return ans;
    }
    int minDiffInBST(TreeNode* root) {
        return help(root);
    }
};