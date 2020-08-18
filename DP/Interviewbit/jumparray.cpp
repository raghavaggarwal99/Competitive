int Solution::canJump(vector<int> &A) {
    
    int n=A.size();
    
    if (n <= 1) 
        return 1; 
  
    // Return -1 if not possible to jump 
    if (A[0] == 0) 
        return 0; 
  

    int maxReach = A[0]; 
  

    int step = A[0]; 
  
  
    int jump = 1; 
  

    int i = 1; 
    for (i = 1; i < n; i++) { 
 
        if (i == n - 1){
            return 1;
        }
  
        maxReach = max(maxReach, i + A[i]); 
  
        step--; 
  
     
        if (step == 0) { 
            jump++; 
  
            if (i >= maxReach) 
                return 0; 
  

            step = maxReach - i; 
        } 
    } 
  
    return 0; 

    
    
}

