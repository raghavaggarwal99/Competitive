int find(int a, vector<int> &parent){
    if(parent[a]<0) return a;
    
    return find(parent[a], parent);
}

int Solution::solve(vector<int> &A, vector<int> &B, vector<vector<int> > &C) {
    int n=A.size();
    
    vector<int> parent(n+1, -1);
    
    for(int i=0; i<C.size(); i++){
        
        int x=A[C[i][0]-1];
        int y=A[C[i][1]-1];
        
        int a=find(x, parent);
        
        int b=find(y, parent);
        
        if(a!=b) parent[b]=a;
    }
    
    
    for(int i=0; i<n; i++){
        
        if(A[i]!=B[i]){
            int a=find(A[i], parent);
            int b=find(B[i], parent);
            if(a!=b) return 0;
        }
        
    }
    return 1;
}
