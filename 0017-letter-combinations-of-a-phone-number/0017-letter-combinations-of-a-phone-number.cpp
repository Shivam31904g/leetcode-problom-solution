class Solution {
public:
    void help(vector<string>& s,string& a,string& d,vector<string>& ans,int idx){
        if(a.size()==d.size()){
            ans.push_back({a});
            return;
        }
        int j=idx;
        while(j<d.size()){
            int i=0;
            while(i<s[d[j]-'2'].size()){
                a.push_back(s[d[j]-'2'][i]);
                help(s,a,d,ans,j+1);
                a.pop_back();
                i++;
            }
            j++;
        }
        return;
    }
    vector<string> letterCombinations(string d) {
        vector<string> s={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string a;
        help(s,a,d,ans,0);
        return ans;

    }
};