int Solution::longestValidParentheses(string A) {
    
    
    stack<int> s;
    
    int ans=0;
    s.push(-1);
    
    
    for(int i=0; i<A.length(); i++){
        
        if(A[i]=='('){
            s.push(i);
        }
        else{
            s.pop();
            
            if(!s.empty()){
                ans=max(ans, i-s.top());
            }
            
            else{
                s.push(i);
            }

            
        }
        
        
    }
    
    
    return ans;

    
}

