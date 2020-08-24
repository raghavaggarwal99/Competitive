class ProductOfNumbers {
public:
    vector<int> ans;
    
    vector<int> product;
    
    ProductOfNumbers() {
        
        ans.clear();
        ans.push_back(1);
        
        
    }
    
    void add(int num) {
        
        if(num==0){
            ans.clear();
            ans.push_back(1);
        }
        else{
            ans.push_back(num*ans.back());
        }
        
    }
    
    int getProduct(int k) {
        
    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
        int n=ans.size();
        
        if(k<ans.size()){
            return ans[n-1]/ans[n-1-k];
        }
        
        return 0;
        
        
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
