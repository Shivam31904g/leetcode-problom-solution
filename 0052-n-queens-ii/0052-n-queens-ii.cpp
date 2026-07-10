class Solution {
public:
bool safe(vector<string> s,int r,int c,int n){
        for(int i=0;i<n;i++){
            if(s[i][c]=='Q'){
                return false;
            }
            if(s[r][i]=='Q'){
                return false;
            }
        }
        for(int i=r,j=c;i>=0 && j>=0;i--,j--){
            if(s[i][j]=='Q'){
                return false;
            }
        }
        for(int i=r,j=c;i>=0 && j<n;i--,j++){
            if(s[i][j]=='Q'){
                return false;
            }
        }
        return true;

    }
    void help(vector<string>& t,int r,int si,int& ans){
        if(r==si){
            ans++;
            return;
        }
        for(int i=0;i<si;i++){
            if(safe(t,r,i,si)){
                t[r][i]='Q';
                help(t,r+1,si,ans);
                t[r][i]='.';
            }
        }
       
    }
    int totalNQueens(int n) {
        vector<string> s(n,string(n,'.'));
        int ts=0;
        help(s,0,n,ts);
        return ts;
        
    }
};