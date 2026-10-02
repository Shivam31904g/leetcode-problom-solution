class Solution {
public:
    void help(vector<string>& ans,int n,string a,int t){
        if((n<=0 && t>0)||(n<t)){
            return;
        }
        if(n==0 && t==0){
            ans.push_back(a);
            return;
        }
        if(t>0){
            help(ans,n,a+"(",t-1);
        }
        if(n>0){
        
           help(ans,n-1,a+")",t); 
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        help(ans,n,"",n);
        return ans;
    }
};