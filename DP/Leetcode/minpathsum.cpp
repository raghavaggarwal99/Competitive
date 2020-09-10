class Solution {
public:

    
    int minPathSum(vector<vector<int>>& cost) {
        
        int n=cost.size();
        
        int m=cost[0].size();
        
        
        int tc[n+1][m+1];   
  
         tc[0][0] = cost[0][0]; 


         for (int i = 1; i <n; i++) 
            tc[i][0] = tc[i-1][0] + cost[i][0]; 


         for (int j = 1; j <m; j++) 
            tc[0][j] = tc[0][j-1] + cost[0][j]; 


         for (int i = 1; i <n; i++) {
             
            for (int j = 1; j <m; j++){ 
                
                tc[i][j] = min(tc[i-1][j],  tc[i][j-1]) + cost[i][j]; 
                
            }
         }

         return tc[n-1][m-1]; 
        
       
    }
};
