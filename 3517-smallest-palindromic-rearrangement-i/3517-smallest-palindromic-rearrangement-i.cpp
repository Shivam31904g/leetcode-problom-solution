class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> cou(26,0);
        int i=0;
        while(i<s.size()){
            cou[s[i]-'a']++;
            i++;
        }
        i=0;
        string ans="";
        char unev='A';
        while(i<26){
            if(cou[i]%2!=0){
                unev='a'+i;
            }
            int j=0;
            while(j<cou[i]/2){
                ans+='a'+i;
                j++;
            }
            cou[i]=cou[i]/2;
            i++;
        }
        if(unev!='A'){
            ans+=unev;
        }
        i=25;
        while(i>=0){
            int j=0;
            while(j<cou[i]){
                ans+='a'+i;
                j++;
            }
            i--;
        }
        return ans;
    }
};