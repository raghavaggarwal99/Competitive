int Solution::maxp3(vector<int> &A) {
    
    
    sort(A.begin(),A.end());
    
    
    if(A.size()<=2){
        return 0;
    }
    int n=A.size()-1;
    
    long long int ans=A[n]*A[n-1]*A[n-2];
    
    long long int ans1=A[0]*A[1]*A[n];
    
    return max(ans,ans1);
    
    
}

