class Solution {
public:
    void help(int k,int n,int idx,vector<vector<int>>& ans,vector<int> a){
        if(k==0){
            if(n==0){
                ans.push_back(a);
            }
            return;
        }
        while(idx<=9){
        a.push_back(idx);
        help(k-1,n-idx,idx+1,ans,a);
        a.pop_back();
        idx++;
        }
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> a;
        help(k,n,1,ans,a);
        return ans;

    }
};