int Solution::solve(string A) {
    
    int l=0, r=A.length()-1;
    
    int count = 0;
    
    while(l < r){
        
        if(A[l] == A[r]){
            l++;
            r--;
            
        }else{
            if(l == 0) {
                
                count++;
                r--;
            }
            else {
                count += l;
                l = 0;
            }
            
        }
    }
    
    return count;
    
    
    
}

