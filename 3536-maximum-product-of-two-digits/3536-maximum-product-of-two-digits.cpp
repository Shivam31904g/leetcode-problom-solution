class Solution {
public:
    int maxProduct(int n) {
        int a=0,b=0;
        while(n>0){
            int c=n%10;
            if(c>=a){
                b=max(a,b);
                a=c;
            }
            else{
                b=max(c,b);
            }
            n/=10;
        }
        return a*b;
    }
};