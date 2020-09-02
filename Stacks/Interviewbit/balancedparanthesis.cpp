int Solution::solve(string A) {
    
    stack<char> s;
    
    for(int i=0; i<A.length(); i++){
        
        if(A[i]=='('){
            s.push(A[i]);
        }
        else{
            if(s.size()==0){
                return 0;
            }
            
            if(s.top()=='('){
                s.pop();
            }
            else{
                return 0;
            }
            
        }
        
        
        
    }
    
    if(s.size()>=1){
        return 0;
    }
    
    return 1;
    
    
}

