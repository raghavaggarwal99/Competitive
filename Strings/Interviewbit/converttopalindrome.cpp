int Solution::solve(string A) {
    
    
    int n=A.length();
    
    int l=0;
    int r=n-1;
    
    int index1=-1;
    int index2=-1;
    
    while(l<=r){
        
        if(A[l]==A[r]){
            l++;
            r--;
        }
        else{
            index1=l;
            index2=r;
            break;
        }
        
        
    }
    
    if(index1==-1 || index2==-1){
        return 1;
    }
    
    int check=-1;

    l=0;
    r=n-1;
    
    while(l<=r){
        
        if(l==index1){
            l++;
            continue;
        }
        
        if(A[l]==A[r]){
            l++;
            r--;
        }
        else{
           check=1;
           break;
        }
        
        
    }
    
    if(check==-1){
        return 1;
    }
    
    l=0;
    r=n-1;
    
    check =-1;
    
    
    while(l<=r){
        
        if(r==index2){
            r--;
            continue;
        }
        
        if(A[l]==A[r]){
            l++;
            r--;
        }
        else{
           check=1;
           break;
        }
        
        
    }
    
    
    
    if(check==-1){
        return 1;
    }
    
    
    return 0;
    
}

