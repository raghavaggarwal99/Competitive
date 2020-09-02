int Solution::strStr(const string A, const string B) {
    
    int n=B.length(); 
    
    if(n==0 || A.length()==0){
        return -1;
    }
    
    if(A.length()<n){
        return -1;
    }
    
    
    for(int i=0; i<=A.length()-n; i++){
        
        string s= A.substr(i, n);
        if(s==B){
            return i;
        }
        
    }
    
    return -1;

    
    
}

