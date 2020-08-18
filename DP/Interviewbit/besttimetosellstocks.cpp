int Solution::maxProfit(const vector<int> &A) {
    
    int n=A.size();
    
    if(n==0 || n==1){
        return 0;
    }
  
    int ans=A[1]-A[0];
    
    int d=min(A[1], A[0]);
    
    for(int i = 1; i < n; i++) 
     {      
       if (A[i] - d > ans)                              
       ans = A[i] - d; 
         
       if (A[i] < d) 
       d = A[i];                      
     } 
       
     return ans; 
    
    
    
    
}

