int Solution::coinchange2(vector<int> &A, int B) {
    
    int mod=1000007;
    
    int m=A.size();
    int n=B;
    
   int table[n+1]; 
  

    memset(table, 0, sizeof(table)); 
  
   
    table[0] = 1; 
  
    for(int i=0; i<m; i++) 
        for(int j=A[i]; j<=n; j++) 
            table[j] += table[j-A[i]]%mod; 
  
    return table[n]%mod; 
}

