class Solution {
public:
    vector<vector<int>> dp;
    
    int solve(vector<vector<int>>& mat, int i, int j, int n, int m){
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int xm[] = {1, -1, 0, 0};
        
        int ym[] = {0, 0, -1, 1};
        
        int ans = 0;
        
        
        for(int k=0;k<4;k++){
            
            int x = i + xm[k];
            int y = j + ym[k];
            
            if(x>=0 and x<n and y>=0 and y<m and mat[x][y]>mat[i][j]){
                ans = max(ans, solve(mat, x, y, n, m));
            }
        }
        
        
        return dp[i][j] = ans+1;
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        if(n==0) return 0;
        
        int m = matrix[0].size();
        
        dp.resize(n+1, vector<int>(m+1,-1));
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                if(dp[i][j]==-1){
                    dp[i][j] = solve(matrix, i, j, n, m);
                }
                
                ans = max(ans, dp[i][j]);
            }
        }
        

        
        
        return ans;
    }
};
