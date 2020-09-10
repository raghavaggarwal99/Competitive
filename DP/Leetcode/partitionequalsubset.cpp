class Solution {
public:
    bool canPartition(vector<int>& A) {
        
        int n=A.size();
        
        int sum=0;
        
        for(int i=0; i<n; i++){
            sum+=A[i];
        }
        
        if(sum%2!=0){
            return 0;
        }
        
        int m=sum/2;
        
        int dp[n+1][m+1];
        
        for(int i=0; i<=n; i++){
            
            dp[i][0]=1;
            
        }
        
         for(int i=0; i<=m; i++){
            
            dp[0][i]=0;
            
        }
        
        
        for(int i=1; i<=n; i++){
            
            for(int j=1; j<=m; j++){
                
                
                if(j<A[i-1]){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j]||dp[i-1][j-A[i-1]];
                }
                
            }
            
            
        }
        
        
        
        
//         for(int i=0; i<=n; i++){
            
//             for(int j=0; j<=m; j++){
                
//                cout<<dp[i][j]<<" ";
                
//             }
//             cout<<endl;
            
            
//         }
        
        
        return dp[n][m];
        
        
        
        
        
        
        
        
        
    }
};
