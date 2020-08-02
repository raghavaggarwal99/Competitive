vector<int> Solution::wave(vector<int> &A) {
    
    sort(A.begin(), A.end());
    
    int i=0;
    
    int n=A.size();
    
    if(A.size()%2==0){
        n=A.size();
    }
    else{
        n=A.size()-1;
    }
    
    while(i<n){
        
        int v=A[i+1];
        A[i+1]=A[i];
        A[i]=v;
        
        i+=2;
    }
    
    return A;
    
    
}

