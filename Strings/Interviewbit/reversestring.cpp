string Solution::solve(string A) {
    
    
    string ans="";
    string s2="";
    int n=A.length();
    
    for(int i=n-1; i>=0; i--){
        if(!(A[i]>=65 && A[i]<=90 || A[i]>=97 && A[i]<=122)){
            reverse(s2.begin(), s2.end()); 
            ans+=s2;
            s2.clear();
            ans+=A[i];
        }
        else{
            s2+=A[i];
        }
    }
     reverse(s2.begin(), s2.end()); 
            ans+=s2;
            s2.clear();
    
    return ans;
    
}

