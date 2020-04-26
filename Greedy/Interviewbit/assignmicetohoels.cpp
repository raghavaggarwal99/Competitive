int Solution::mice(vector<int> &A, vector<int> &B) {
    
    sort(A.begin(),A.end());
    
    sort(B.begin(),B.end());
    
    int sum=INT_MIN;
    
    for(int i=0; i<A.size(); i++){
        sum=max(abs(A[i]-B[i]),sum);
    }
    
    return sum;
    
    
    
}

