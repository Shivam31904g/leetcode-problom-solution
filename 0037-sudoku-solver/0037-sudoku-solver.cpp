class Solution {
public:
    bool issafe(vector<vector<char>>& board,int row,int col,char c){
        for(int i=0;i<9;i++){
            if(board[i][col]==c){
                return false;
            }
            if(board[row][i]==c){
                return false;
            }
        }
        int sc=(col/3)*3;
        int sr=(row/3)*3;
        for(int i=sc;i<=sc+2;i++){
            for(int j=sr;j<=sr+2;j++){
                if(board[j][i]==c){
                    return false;
                }
            }
        }
        return true;
    }
    void sudo(vector<vector<char>>& board,int row,int col,bool& check){
        if(col==9){
            col=0;
            row++;
        }
        if(row==9){
            check=true;
            return;
        }
        if(board[row][col]!='.'){
            sudo(board,row,col+1,check);
            return;
        }
        for(char i='1';i<='9';i++){
            if(issafe(board,row,col,i)){
                board[row][col]=i;
                sudo(board,row,col+1,check);
                if(check){
                    return;
                }
                board[row][col]='.';
                
            }
        }
    }
    void solveSudoku(vector<vector<char>>& board) {
        bool check=false;
        sudo(board,0,0,check);
    }
};