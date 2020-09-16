class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        
        
       int sol = INT_MAX;
        int row = A.size();
        int col = A[0].size();
        
        
        for(int i=A.size()-2; i>=0; i--){
            
            for(int j=0; j<col; j++){
                
                if(j==0){
                    A[i][j]= A[i][j]+min(A[i+1][j], A[i+1][j+1]);
                }
                else if(j==col-1){
                     A[i][j]= A[i][j]+min(A[i+1][j], A[i+1][j-1]);
                }
                else{
                    A[i][j]= A[i][j]+min(A[i+1][j], min(A[i+1][j+1], A[i+1][j-1]));
                }
                
                
            }
            
        }
        
    
        for(int i=0; i<col; i++){
            // cout<<A[0][i]<<" ";
            sol =min(sol, A[0][i]);
        }
        
        
        return sol == INT_MAX ? A[0][0] : sol; 
    
        return 0;
        
        
        
        
        
        
    }
};
