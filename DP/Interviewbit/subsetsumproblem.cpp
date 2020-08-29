int Solution::solve(vector<int> &A, int B) {
    
    int n=A.size();
    
    bool subset[n + 1][B + 1]; 
  
    for (int i = 0; i <= n; i++) 
        subset[i][0] = true; 
  
    for (int i = 1; i <= B; i++) 
        subset[0][i] = false; 
  
   
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= B; j++) { 
            
            if (j < A[i - 1]) 
                subset[i][j] = subset[i - 1][j]; 
                
            if (j >= A[i - 1]) 
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - A[i - 1]]; 
        } 
    } 
 
  
    return subset[n][B]; 
    
    
    
    
    
}

