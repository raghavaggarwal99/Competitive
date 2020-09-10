class Solution {
public:
    int minDistance(string A, string B) {
        
        
        int m=A.length();
        
        int n=B.length();
        

        int dp[m + 1][n + 1]; 
  

        for (int i = 0; i <= m; i++) { 

            for (int j = 0; j <= n; j++) { 

                if (i == 0) 
                    dp[i][j] = j; // Min. operations = j 

                else if (j == 0) 
                    dp[i][j] = i; // Min. operations = i 


                else if (A[i - 1] == B[j - 1]) 
                    dp[i][j] = dp[i - 1][j - 1]; 


                else
                    dp[i][j] = 1 + min(dp[i][j - 1], // Insert 
                                        dp[i - 1][j]); // Replace 
            } 
        } 
  
    return dp[m][n]; 
        
        
        
        
        
        
    }
};
