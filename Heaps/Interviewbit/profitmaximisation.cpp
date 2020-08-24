int Solution::solve(vector<int> &A, int B) {
    
    
    priority_queue<int> p;
    
    for(int i=0; i<A.size(); i++){
        p.push(A[i]);
    }
    
    int start=0;
    
    int ans=0;
    
    while(start<B){
        
        int v=p.top();
        p.pop();
        
        ans+=v;
        
        p.push(v-1);
        
        start++;
        
        
        
    }
    
    
    return ans;
    
    
    
    
}

