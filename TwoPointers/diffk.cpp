int Solution::diffPossible(vector<int> &A, int k) {
    
    int i=0;
    int j=1;
    
    while(1){
        
        if(j==A.size()){
            break;
        }
        if(i==j){
            j++;
            continue;
        }
        if(A[j]-A[i]==k){
            return 1;
        }
        else if(A[j]-A[i]>k){
            i++;
        }
        else{
            j++;
        }
        
        
    }
    
    return 0;
    
    
}

