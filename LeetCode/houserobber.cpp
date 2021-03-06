class Solution {
public:
    int rob(vector<int>& a) {
        
        int n=a.size();
        
        if (n == 0) 
        return 0; 
        
        if (n == 1) 
            return a[0]; 
        
        
        if (n == 2) 
            return max(a[0], a[1]); 
        
        
        int dp[n+1];
        
      
        dp[0]=a[0];
        dp[1]=max(a[0],a[1]);
        
        
        for(int i=2; i<n; i++){
           dp[i]=max(dp[i-2]+a[i], dp[i-1]);
        }
        
        return dp[n-1];
        
        
        
        
    }
};
