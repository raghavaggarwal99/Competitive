int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    
    int n=A.size();
    int m=A[0].size();
    
    int dp[n][m];
    
    
     for(int i=0; i<n; i++){
        
        for(int j=0; j<m; j++){
            dp[i][j]=0;
            
            if(A[i][j]==1){
                continue;
            }
            
            if(i==0 && j==0){
                dp[i][j]=1;
            }
            
            if(i>0){
                dp[i][j]+=dp[i-1][j];
            }
            if(j>0){
                dp[i][j]+=dp[i][j-1];
            }
            
        }
        
    }
    
    
    return dp[n-1][m-1];
    
    
    
    
    
}

