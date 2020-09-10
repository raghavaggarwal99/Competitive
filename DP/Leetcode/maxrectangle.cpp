class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        
         int n = matrix.size();
      if(n==0){
        return 0;
      }
        
      int m = matrix[0].size();
      if(m==0){
        return 0;
      }
        
        
      int dp[n][m];
        
        
      int area = 0;
        
        
      for(int i = 0; i < n; i++){
          
        for(int j = 0; j < m; j++){
            
            
          if(matrix[i][j]=='1'){ 
              
            if(j==0){
              dp[i][j] = 1;
            }
              
              
            else{
              dp[i][j] = dp[i][j-1]+1;
            }
              
              
            int width = dp[i][j];
              
              
            for(int k = i; k >= 0; k--){
                
              width = min( width, dp[k][j]);
                
              area = max(area,width*(i-k+1));
                
            }
              
              
          }
            
          else{
            dp[i][j] = 0;
          }
            
            
        }
      }
        
        
//          for(int i = 0; i < n; i++){
          
//         for(int j = 0; j < m; j++){
            
            
//             cout<<dp[i][j]<<" ";
            
            
//         }
//              cout<<endl;
//       }
        
        
        
      return area;
        
    }
};
