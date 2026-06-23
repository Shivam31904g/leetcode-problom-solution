class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans=0;
        stack<int> s;
        int i=0;
        while(i<p.size()){
            s.push(p[i]);
            i++;
        }
        i=p.size()-1;
        while(i>=0){
            int v=p[i],a=p[i];
            int j=1;
            while(!s.empty() && s.top()<=v){
                v=s.top();
                s.pop();
                i--;
            }
            ans+=abs(v-a);
        }
        return ans;
    }
};