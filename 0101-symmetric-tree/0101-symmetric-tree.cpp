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
    bool isSymmetric(TreeNode* root) {
        int idx=1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int i=0;
            vector<int> ans;
            TreeNode* curr;
            while(i<idx){
                curr=q.front();
                q.pop();
                if(curr==NULL){
                    ans.push_back(-101);
                }
                else{
                    ans.push_back(curr->val);
                }
                if(curr==NULL){
                    q.push(NULL);
                    q.push(NULL);
                }
                else{
                    q.push(curr->left);
                    q.push(curr->right);
                } 
                i++;
            }
            idx*=2;
            i=0;
            bool f=true;
            while(i<ans.size()){
                if(ans[i]!=-101){
                    f=false;
                }
                i++;
            }
            if(f){
                return true;
            }
            i=0;

            int j=ans.size()-1;
            while(i<j){
                if(ans[i]!=ans[j]){
                    return false;
                }
                i++;
                j--;
            }
            ans.clear();
        }
        return true;
    }
};