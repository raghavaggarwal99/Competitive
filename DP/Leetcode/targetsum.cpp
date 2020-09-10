class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        
         int n,i,j,sum=0,sum1;
        
        n=nums.size();
        
        for(i=0;i<n;i++)
           sum+=nums[i];
        
        if(S>sum)
            return 0;
        
        if((sum+S)%2!=0)
          return 0;
        else
            sum1=(sum+S)/2;
        
        
        int dp[n+1][sum1+1];
        
        
        for(i=0;i<=sum1;i++)
            dp[0][i]=0;
        
        
        for(i=0;i<=n;i++)
            dp[i][0]=1;
        
        
        for(i=1;i<n+1;i++)
        {
            for(j=0;j<sum1+1;j++)
            {
                if(nums[i-1]<=j)
                    dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        
        
        return dp[n][sum1];
        
        
        
        
        
        
        
    }
};
