int Solution::solve(vector<int> &A, int B) {
    
    int odd=0;
    
    int count=0;
    
    vector<int> prefix(A.size(),0);
    
    for(int i=0; i<A.size(); i++){
        
        prefix[odd]++;
        
        if(A[i]%2!=0){
            odd++;
        }
        
        if(odd>=B){
            count+=prefix[odd-B];
        }
        
        
        
    }
    
    return count;
    
    
    
    
    
}

