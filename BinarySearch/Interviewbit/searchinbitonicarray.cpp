int Solution::solve(vector<int> &A, int B) {
    
    
    
    unordered_map<int,int> m;
    for(int i=0;i<A.size();i++)
    m[A[i]]=i;
    
    for(int i=0;i<A.size();i++){
        if(m.count(A[B])>0)
        return m[B];
    }
    return -1;
        
    
    
    
    
    
}

