class Solution {
public:
    int numRollsToTarget(int d, int f, int t) {
        
        
        int M=1000000007;
        
    vector<vector<int>> dp(d+1,vector<int> (t+1,0));
        
    for(int i=0;i<=d;i++) {
        
        for(int j=0;j<=t;j++){
            
        if(i==0 && j==0)dp[i][j]=1;

            else if(j==0 || i==0)dp[i][j]=0;

            else{
                for(int k=1;k<=f &&j-k>=0;k++){

                    dp[i][j]=(dp[i][j]+dp[i-1][j-k])%M;
                }
            }
        }
    }
        
    return dp[d][t];

        
        
    }
};
