int Solution::solve(string A) {
    
    int count=0;
    int n=A.length();
    int num=10003;
    
    for(int i=0; i<n; i++){
        
        if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' || A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u'){
            count=(count+n-i)%num;
        }
        
        
    }
    
    return count;
    
    
    
    
}

