class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& it) {
        int ans=it.size();
        for(int i=0;i<it.size();i++){
            for(int j=0;j<it.size();j++){
                if(j==i){
                    continue;
                }
                if(it[i][0]>=it[j][0] && it[i][1]<=it[j][1]){
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};