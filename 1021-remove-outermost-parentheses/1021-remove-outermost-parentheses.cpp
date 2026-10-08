class Solution {
public:
    string removeOuterParentheses(string s) {
        string st;
        int coun=0;
        int j=0;
        for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            coun++;
        }
        else{
            coun--;
        }
        if(coun==0 && s!=""){
            j++;
            while(j<i){
            st.push_back(s[j]);
            j++;
            }
            j++;
        }
    }
    return st;
    }
};