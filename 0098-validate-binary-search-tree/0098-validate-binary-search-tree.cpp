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
    bool help(TreeNode* root,TreeNode* mi,TreeNode* ma){
        if(root==NULL){
            return true;
        }
        if(mi!=NULL && mi->val>=root->val){
            return false;
        }
        if(ma!=NULL && ma->val<=root->val){
            return false;
        }
        return help(root->left,mi,root) && help(root->right,root,ma);
    }
    bool isValidBST(TreeNode* root) {
        return help(root,NULL,NULL);
    }
};