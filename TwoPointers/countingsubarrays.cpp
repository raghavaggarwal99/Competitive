int Solution::solve(vector<int> &A, int B) {
    
    int start = 0, end = 0, 
        count = 0, sum = A[0]; 
  
    int n=A.size();
  
    while (start < n && end < n) { 
  
        if (sum < B) { 
            end++; 
  
            if (end >= start) 
                count += end - start; 
  
          
            if (end < n) 
                sum += A[end]; 
        } 
  
     
        else { 
            sum -= A[start]; 
            start++; 
        } 
    } 
  
    return count; 
    
    
}

