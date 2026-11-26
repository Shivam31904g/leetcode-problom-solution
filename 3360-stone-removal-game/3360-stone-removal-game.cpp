class Solution {
public:
    bool canAliceWin(int n) {
        int a=10;
        int ans=false;
        while(n-a>=0){
            n-=a;
            ans=!ans;
            a--;
        }
        return ans;
    }
};