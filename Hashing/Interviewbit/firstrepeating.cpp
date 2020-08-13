int Solution::solve(vector<int> &A) {
    
    unordered_map<int,int> x;
    
    int index= INT_MAX;
    int ans=-1;
    
    for(int i=0; i<A.size(); i++){
        
        if(x[A[i]]>=1){
            
            if(x[A[i]]<index){
                index=x[A[i]];
                ans=A[i];
            }
            
        }
        else{
            x[A[i]]=i+1;
        }
    }
    
    return ans;
    

}

