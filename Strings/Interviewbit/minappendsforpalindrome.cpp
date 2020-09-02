int Solution::solve(string A) {
    
    int l=0;
    int r=A.length()-1;
    
    int count=0;
    
    while(l<=r){
        
        if(A[l]==A[r]){
            l++;
            r--;
        }
        else{
            
            if(r==A.length()-1){
                l++;
                count++;
            }
            else{
                count+=A.length()-1-r;
                r=A.length()-1;
            }
            
            
        }
    
    }
    
   return count; 
    
    
    
    
}

