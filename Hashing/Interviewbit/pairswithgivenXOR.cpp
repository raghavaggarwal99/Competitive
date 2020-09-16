int Solution::solve(vector<int> &A, int B) {
    
    
    set<int> mp;
    
    int i,j,n=A.size(),cnt=0;
    
    for(i=0;i<n;i++){
        mp.insert(A[i]);
    }
    
    for(i=0;i<n;i++){
        
        if(mp.find(A[i]^B)!=mp.end()){
            cnt++;

        }
    }
    
    
    return cnt/2;


}

