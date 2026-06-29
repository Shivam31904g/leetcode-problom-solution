class Solution {
public:
    int numOfStrings(vector<string>& p, string w) {
        int ans=0;
        int i=0;
        while(i<p.size()){
            int j=0,k=p[i].size()-1;
            int t=j,l=0;
            while(k<w.size() && t<=k){
                if(w[t]!=p[i][l]){
                    k++;
                    j++;
                    t=j;
                    l=0;
                    continue;
                }
                t++;
                l++;
            }
            if(t>k){
                ans++;
            }
            i++;
        }
        return ans;
    }
};