int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    
    
    long long int sum=0;
    long long int gas=0;
    long long int tank=0;
    int start=0;
    
    
    
    
    for(int i=0; i<A.size(); i++){
        
        sum+=A[i];
        gas+=B[i];
        tank+=A[i]-B[i];
        
        if(tank<0){
            start=i+1;
            tank=0;
            
        }
    }
    // start=start%A.size();
    
    if(sum<gas){
        return -1;
    }
    
    return start;
    
    
    
    
}

