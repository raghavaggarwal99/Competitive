int Solution::solve(int A, int B, int C) {
    
    
    
    if(A<=B-C+1){
        return C+A-1;
    }
    
    A=A-(B-C+1);
    
    return A%B;
    
    
    
    
    
    
    
    
    
}

