int Solution::solve(string A) {
    
    int ans=0;
    
    int a=0;
    int b=0;
    
    for(int i=0; i<A.length(); i++){
        
        if(A[i]=='('){
            a++;
        }
        else{
            
            if(a>0){
                a--;
            }
            else{
                b++;
            }
            
            
        }
 
    }
    
    return a+b;
    
    
    
    
    
    
}

