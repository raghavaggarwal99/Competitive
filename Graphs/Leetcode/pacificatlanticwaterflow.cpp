class Solution {
public:
    void dfs(vector<vector<int>> &v, vector<vector<int>> &dp, int i, int j, int k)
    {
        
        int n = v.size();
        int m = v[0].size();
        if(i<0 || j<0 || i>=n || j>=m || v[i][j] < k || dp[i][j]==1)
            return;
        dp[i][j] = 1;
        dfs(v, dp, i+1, j, v[i][j]);
        dfs(v, dp, i-1, j, v[i][j]);
        dfs(v, dp, i, j+1, v[i][j]);
        dfs(v, dp, i, j-1, v[i][j]);
        
    }
    
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& v) {
        
        vector<vector<int>> ans;
        if(v.size()==0)
            return ans;
        
        
        int n = v.size();
        int m = v[0].size();
        
        
        vector<vector<int>> a(n, vector<int>(m,0)),b(n, vector<int>(m, 0));
        
        
        for(int i=0;i<n;i++)
            dfs(v, a, i, 0, INT_MIN);
        
        
        for(int i=0; i<m;i++)
            dfs(v, a, 0, i, INT_MIN);
        
        
        for(int i=0;i<n;i++)
            dfs(v, b, i, m-1, INT_MIN);
        
        
        for(int i=0; i<m;i++)
            dfs(v, b, n-1, i, INT_MIN);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==1 && b[i][j]==1)
                    ans.push_back({i,j});
            }
        }

        
        
        
        return ans;
        
    }
};
