int solve(string A, string B){
    
    if(A.length()!=B.length()){
        return 0;
    }
    
    int n = A.length();
    
    if(n==0){
        return true;
    }
    
    if(A==B){
        return true;
    }
    
    
    
    string copy1= A;
    string copy2= B;
    
    sort(copy1.begin(), copy1.end());
    sort(copy2.begin(), copy2.end());
    
    if(copy1!=copy2){
        return 0;
    }
    else{
        
        for(int i=1; i<n; i++){
            
            
            if(solve(A.substr(0,i), B.substr(0, i)) && solve(A.substr(i,n-i), B.substr(i, n-i))){
                return true;
            }
            
            
            if(solve(A.substr(0,i), B.substr(n-i,i)) && solve(A.substr(i,n-i), B.substr(0, n-i))){
                return true;
            }
            
            
        }
        
        
        
    }

    return false;

    
}

int Solution::isScramble(const string A, const string B) {
    
  
  return solve(A,B);
}

