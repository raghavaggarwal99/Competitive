int max(int a, int b){
    if(a>b){
        return a;
    }
    
    return b;
}

int min(int a, int b){
    if(a>b){
        return b;
    }
    
    return a;
}

int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    
    int i=A.size()-1;
    int j=B.size()-1;
    int k=C.size()-1;
    int ans=INT_MAX;
    
    while(i!=-1 && j!=-1 && k!=-1){
        
        int diff=max(A[i],max(B[j],C[k]))-min(A[i],min(B[j],C[k]));
        if(diff<ans){
            ans=diff;
        }
        int maxx=max(A[i],max(B[j],C[k]));
        
        if(maxx==A[i]){
            i-=1;
        }
        else if(maxx==B[j]){
            j-=1;
        }
        else{
            k-=1;
        }
        
    }
    
    return ans;
    
    
    
    
    
}

