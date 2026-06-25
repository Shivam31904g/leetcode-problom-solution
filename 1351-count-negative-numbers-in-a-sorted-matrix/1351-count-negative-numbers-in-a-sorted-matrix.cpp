class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i=0,j=grid[0].size()-1;
        int ans=0;
        while(i<grid.size()){
            while(j>=0 && grid[i][j]<0){
                j--;
            }
            ans+=(grid[0].size()-1)-j;
            i++;
        }
        return ans;
    }
};