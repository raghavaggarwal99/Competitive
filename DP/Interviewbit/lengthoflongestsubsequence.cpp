int Solution::longestSubsequenceLength(const vector<int> &A) {
    
    int n=A.size();
    
    int i, j; 
  
  if(n==0){
      return 0;
  }


 if(n==1){
      return 1;
  }

   int *lis = new int[n]; 
   for (i = 0; i < n; i++) 
      lis[i] = 1; 
  
   
   for (i = 1; i < n; i++) 
      for (j = 0; j < i; j++) 
         if (A[i] > A[j] && lis[i] < lis[j] + 1) 
            lis[i] = lis[j] + 1; 
  
  
   int *lds = new int [n]; 
   for (i = 0; i < n; i++) 
      lds[i] = 1; 
  
   /* Compute LDS values from right to left */
   for (i = n-2; i >= 0; i--) 
      for (j = n-1; j > i; j--) 
         if (A[i] > A[j] && lds[i] < lds[j] + 1) 
            lds[i] = lds[j] + 1; 
  
  
   /* Return the maximum value of lis[i] + lds[i] - 1*/
   int max = lis[0] + lds[0] - 1; 
   for (i = 1; i < n; i++) 
     if (lis[i] + lds[i] - 1 > max) 
         max = lis[i] + lds[i] - 1; 
         
   return max; 
    
    
    
    
    
    
    
    
}

