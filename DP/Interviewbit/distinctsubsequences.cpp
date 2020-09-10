int Solution::numDistinct(string s, string t) {
    
        int m=s.length();
        
        int n=t.length();
        
        if(n>m)return 0;
        
        long long dp[n+1][m+1];
        
        memset(dp,0,sizeof(dp));
        
        
        for(int i=0;i<=m;i++)
            dp[0][i]=1;
        
        
        for(int i=1;i<=n;i++)
            
            for(int j=1;j<=m;j++)
            {
                if(t[i-1]==s[j-1])
                    dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
                
                else dp[i][j]=dp[i][j-1];
            }
        
        
        
        return dp[n][m];
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

