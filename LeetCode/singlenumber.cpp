class Solution {
public:
    int singleNumber(vector<int>& a) {
        
        int n=a.size();
        
        sort(a.begin(),a.end());
        
        int check=0;
        
        for(int i=1; i<n; i+=2){
           
            
           if(a[i]!=a[i-1]){
              return a[i-1];
           }
            
        }
        
       
        return a[n-1];
        
        
    }
};
