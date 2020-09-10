class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        
        int dp[n+1];
        
        dp[0]=0;
        
        dp[1]=cost[0];
        
        for(int i=2; i<=n; i++){
            
            dp[i]= min(dp[i-2]+cost[i-1], dp[i-1]+cost[i-1]);
            
            
        }
        
         for(int i=0; i<=n; i++){
            
          cout<<dp[i]<<" ";
            
            
        }
                
        
        return min(dp[n], dp[n-1]);
        
        
        
        
        
        
        
    }
};
