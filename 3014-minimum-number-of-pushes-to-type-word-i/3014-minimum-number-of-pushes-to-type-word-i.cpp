class Solution {
public:
    int minimumPushes(string word) {
        int a=word.size();
        int i=0,b=0,ans=0;
        while(i<a){
            if(i%8==0){
                b++;
            }
            ans+=b;
            i++;
        }
        return ans;
    }
};