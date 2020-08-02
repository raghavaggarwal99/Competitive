int Solution::solve(vector<int> &A) {
    
    unordered_map<int,int> x;
    
    for(int i=0; i<A.size(); i++){
        
        if(x[A[i]]==0){
            x[A[i]]++;
        }
        else{
            x[A[i]]++;
            A[i]=-1;
        }
    }
     sort(A.begin(), A.end());
     
    int n=A.size();
    int sum=x[A[n-1]];
    if(A[n-1]==0){
        return 1;
    }
    
    for(int i=n-2; i>=0; i--){
        // cout<<A[i]<<" ";
        if(A[i]==-1){
            break;
        }
        
        if(sum==A[i]){
            return 1;
        }
        else{
            sum+=x[A[i]];
        }
        
    }
    
    
   
    return -1;
    
    
    
    
}

