class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        
        
        int n=nums.size();
        
        vector<vector<int>> dp(n, vector<int>(3, 0));
        
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                dp[0][nums[0]%3] = nums[0];
                continue;
            }
            
            for(int j=0; j<3; j++){
                
                dp[i][j] = dp[i-1][j];     
            }
            
            for(int j=0; j<3; j++)
            {
                int t=nums[i]+dp[i-1][j];
                dp[i][t%3] = max(dp[i][t%3], t);
            }
        }
        
        return dp[n-1][0];
        
        
        
    }
};
