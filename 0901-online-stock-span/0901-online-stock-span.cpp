class StockSpanner {
public:
    vector<int> s1;
    StockSpanner() {
        while(!s1.empty()){
            s1.pop_back();
        }
    }
    
    int next(int price) {
        int ans=1;
        int i=s1.size()-1;
        while(i>=0 && s1[i]<=price){
            ans++;
            i--;
        }
        s1.push_back(price);
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */