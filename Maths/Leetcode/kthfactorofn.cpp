class Solution {
public:
    int kthFactor(int n, int k) {
        
        
        vector<int> v;
  

       for(int i=1; i<=n; i++){
           
           
           if(n%i==0){
                // cout<<i<<endl;
               
               v.push_back(i);
               
               
           }
           
           
           
       }
        
//         for(int i=0; i<v.size(); i++){
//             cout<<v[i]<<" ";
//         }
        
        
        if(v.size()<k){
            return -1;
        }
        
        return v[k-1];
        
        
        
        
        
        
    }
};
