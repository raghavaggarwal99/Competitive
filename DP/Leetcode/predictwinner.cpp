class Solution {
public:
    bool PredictTheWinner(vector<int>& A) {
        
        
         int n=A.size();
    
        int v=0;
        int table[n][n]; 

        int sum=0;
        
        for(int i=0; i<n; i++){
            sum+=A[i];    
        }
        
        
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
        
        
        
        
        
        if(table[0][n - 1]>=sum-table[0][n - 1]){
            return true;
        }
        
        return 0;
        
        
        
        
    }
};
