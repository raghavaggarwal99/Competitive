int Solution::solve(string A, string B) {
    
    
    int n=A.length();
    int m=B.length();
    
    int L[n+1][m+1];
    
    for(int i=0; i<=m; i++){
        L[0][i]=0;
    }
    
    for(int i=0; i<=n; i++){
        L[i][0]=0;
    }
    
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            
            if(A[i-1]==B[j-1]){
                L[i][j]=L[i-1][j-1]+1;
            }
            else{
                L[i][j]=max(L[i-1][j], L[i][j-1]);
            }
            
            
        }
    }
    
    return L[n][m];
    
    
    
    
    
    
    
}

