class Solution {
public:
    int maxNumberOfBalloons(string t) {
        vector<int> v(26,0);
        int i=0;
        while(i<t.size()){
            v[t[i]-'a']++;
            i++;
        }
        string a="balloon";
        i=0;
        int ans=INT_MAX;
        while(i<7){
            if(a[i]=='l' ||a[i]=='o'){
                ans=min(ans,v[a[i]-'a']/2);
            }
            else{
                ans=min(ans,v[a[i]-'a']);
            }
            i++;
        }
        return ans;
    }
};