class Solution {
public:
    void dfs(vector<vector<int>>&M, vector<bool> &vis, int u , int m){
        vis[u]=true;
        
        for(int j=0;j<m;++j){
            if(!vis[j] && M[u][j]==1){
                dfs(M,vis,j,m);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& M) {
        
        int ans=0,n=M.size(),i,m=M[0].size();

        vector<bool> vis(n,false);
        
        for(i=0;i<n;i++){
            
            if(!vis[i]){
                ans++;
                dfs(M,vis,i,m);
            }
        }
            
        
        return ans;
    }
    
};
