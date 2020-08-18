int Solution::canJump(vector<int> &A) {
    
    int n=A.size();
    
    int dp[n];
    
    
    dp[0]=0;
    
    for(int i=1; i<n; i++){
        
        dp[i]=INT_MAX;
        
        for(int j=0; j<i; j++){
            
            if(i<=j+A[j] && dp[j]!=INT_MAX){
                dp[i]=min(dp[i], dp[j]+1);
            }
        }
        
        
    }
    
    
    // for(int i=0; i<n; i++){
    //     cout<<dp[i]<<" ";
    // }
    
    // cout<<endl;
    
    if(dp[n-1]==INT_MAX){
        return 0;
    }
    
    return 1;

    
    
}

