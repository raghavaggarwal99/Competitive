class Solution {
public:
    int findLHS(vector<int>& a) {
        
        
        
       
        int ans=0;
        
       unordered_map<int,int> x;
        
        vector<int> b;
        
        for(int i=0; i<a.size(); i++){
            
           if(x[a[i]]==0){
               x[a[i]]++;
               b.push_back(a[i]);
               
           }
            else{
                x[a[i]]++;
            }
        }
        
         for(int i=0; i<b.size(); i++){
            
           int v=b[i];
             int count=0;
             
             if(x[v-1]!=0){
                count= x[v]+x[v-1];
             }
             else{
                 count=0;
             }
             
             if(count>ans){
                 ans=count;
             }
             
             
        }
        
        return ans;
        
        
        
        
    }
};
