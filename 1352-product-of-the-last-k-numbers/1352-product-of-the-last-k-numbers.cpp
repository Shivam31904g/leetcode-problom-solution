class ProductOfNumbers {
public:
    vector<int> arr;
    vector<int> a;
    int val=1;
    int ind=-2;
    
    ProductOfNumbers() {
        val=1;
        ind=-2;
        arr.clear();
        a.clear();
    }
    
    void add(int num) {
        arr.push_back(num);
        val*=num;
        a.push_back(val);
        if(val==0){
            val=1;
            ind=a.size()-1;
        }

    }
    
    int getProduct(int k) {
        int i=a.size();
        if((i-k)<=ind){
            return 0;
        }
        if(i-(k+1)<0 || a[i-(k+1)]==0){
            return val;
        }
        int ans=val/a[i-(k+1)];
        
        return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */