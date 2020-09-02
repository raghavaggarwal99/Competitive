class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        
        
        int dp[9];
        
        dp[0]=1;
        dp[1]=10;
        dp[2]=81;
        
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]*(10-i+1);
        }
        
        for(int i=2;i<=n;i++)
            dp[i]+=dp[i-1];
        
        return dp[n];
        
    }
};
