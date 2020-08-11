int Solution::solve(vector<int> &A, int B) {
    
    
    unordered_map<int,int> x;
    
    for(int i=0; i<A.size(); i++){
        x[A[i]]++;
        if(B==0 && x[A[i]]>=2){
            return 1;
        }
    }
    
    if(B==0){
        return 0;
    }
    
    for(int i=0; i<A.size(); i++){
        if(x[A[i]-B]>0 || x[B+A[i]]>0 ){
            // cout<<A[i]<<" "<<endl;
            return 1;
        }
    }
    
    
    return 0;
    
    
    
    
}

