int Solution::diffPossible(const vector<int> &A, int B) {
    
    unordered_map<int,int> x;
    
    for(int i=0; i<A.size(); i++){
        x[A[i]]++;
    }
    
    
     for(int i=0; i<A.size(); i++){
        if(B==0){
            if(x[A[i]]>=2){
                return 1;
            }
        }
        else{
            
            if(x[A[i]+B]>=1 || x[A[i]-B]>=1){
                return 1;
            }
            
            
        }
    }
    
    return 0;
    
    
    
    
    
    
}

