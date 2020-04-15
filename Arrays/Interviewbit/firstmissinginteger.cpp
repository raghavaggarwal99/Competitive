int Solution::firstMissingPositive(vector<int> &A) {
    
    sort(A.begin(), A.end());
    
    if(A[A.size()-1]<=0){
        return 1;
    }
    
    int check=-1;
    
    for(int i=0; i<A.size(); i++){
       
       if(A[i]<=0){
           check=i;
       }
       
    }
    int v=1;
    for(int i=check+1; i<A.size(); i++){
        if(A[i]!=v){
            return v;
        }
        else{
            v++;
        }
    }
    
    return v;
    
    
    
    
    
    
}

