int Solution::trailingZeroes(int A) {
    

    int count5=0;
    long long int v=5;
    while(1){
        
        if(v>A){
            break;
        }
        
        count5+=A/v;
        v*=5;
        
    }
    
    return (count5);
    
    
    
    
}

