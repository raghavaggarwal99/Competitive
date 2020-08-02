int Solution::bulbs(vector<int> &A) {
    
    int count0=0;
    int count1=0;
    
    for(int i=0; i<A.size(); i++){
        
        if(A[i]==1 && count0%2!=0){
            count0++;
        }        
        if(A[i]==0 && count0%2==0){
            count0++;
            
        }
        
        
    }
    
    return count0;
    
    
    
}

