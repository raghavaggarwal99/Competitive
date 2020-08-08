int Solution::perfectPeak(vector<int> &A) {
    
    int v=A[0];
    
    unordered_map<int,int> x;
    
    int n=A.size();
    
    for(int i=1; i<n; i++){
        if(A[i]>v){
            v=A[i];
            x[i]=1;
        }
    }
    
    
    v=A[n-1];
    
    for(int i=n-2; i>=0; i--){
        
        if(A[i]<v){
            v=A[i];
            if(x[i]==1){
                // cout<<A[i]<<endl;
                return 1;
            }
        }
        
    }
    
    
    
    
    return 0;
    

    
}

