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

int Solution::maxArr(vector<int> &A) {
    
    
    int maxx1=INT_MIN;
    int maxx2=INT_MIN;
    int min1=INT_MAX;
    int min2=INT_MAX;
    
    for(int i=0; i<A.size(); i++){
        
        int c=A[i]+i;
        int v=A[i]-i;
        
        if(c>maxx1){
            maxx1=c;
        }
        if(v>maxx2){
            maxx2=v;
        }
        if(c<min1){
            min1=c;
        }
        if(v<min2){
            min2=v;
        }
        
    }
    
    
    return max(abs(maxx1-min1), abs(maxx2-min2));
    
    
    
    
    
}

