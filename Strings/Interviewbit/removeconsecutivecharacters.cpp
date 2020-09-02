string Solution::solve(string A, int B) {
    
    int count=1;
    
    char v=A[0];
    int i=1;
    
    while(i<A.length()){
        
        if(A[i]==v){
            count++;
            i++;
        }
        else{
            count=1;
            v=A[i];
            i++;
        }
        
        if(count==B){
            // cout<<i-1<<endl;
            // cout<<i-B<<endl;
            
            A.erase(i-B, B);
            // cout<<A<<endl;
            i=i-B;
        }
        
    }
    
    return A;
    
    
    
    
}

