class Solution {
public:
    bool stoneGame(vector<int>& A) {
        
        
    int n=A.size();
    int sum=0;
        
    for(int i=0; i<n; i++){
        sum+=A[i];
    }    
        
        
    int v=0;
    int table[n][n]; 
  
    
    for (int gap = 0; gap < n; ++gap) { 
        for (int i = 0, j = gap; j < n; ++i, ++j) { 
           
            int x = ((i + 2) <= j) 
                        ? table[i + 2][j] 
                        : 0; 
            int y = ((i + 1) <= (j - 1)) 
                        ? table[i + 1][j - 1] 
                        : 0; 
            int z = (i <= (j - 2)) 
                        ? table[i][j - 2] 
                        : 0; 
  
            table[i][j] = max( 
                A[i] + min(x, y), 
                A[j] + min(y, z)); 
        } 
    } 
  
    int ans= table[0][n-1];
        
        if(ans>sum-ans){
            return true;
        }
        
   return false;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};
