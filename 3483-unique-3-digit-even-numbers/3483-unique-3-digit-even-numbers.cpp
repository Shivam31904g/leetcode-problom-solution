class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> s;
        for(int i=0;i<digits.size();i++){
            if(digits[i]==0){
                continue;
            }
            for(int j=0;j<digits.size();j++){
                if(j==i){
                    continue;
                }
                for(int k=0;k<digits.size();k++){
                    if(k==i || k==j){
                        continue;
                    }
                    int a=(digits[i]*10);
                    a=a*10+digits[j];
                    a=a*10+digits[k];
                    if(a%2==0){
                        s.insert(a);
                    }
                }
            
            }
        }
        return s.size();
    }
};