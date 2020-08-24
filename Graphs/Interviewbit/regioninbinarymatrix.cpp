int dfs(int i, int j, vector<vector<int> > &A, int count){
    

    if(i<0 || i>=A.size() || j<0 || j>=A[0].size() || A[i][j]!=1){
        return 0;
    }
  
    A[i][j]=2;
    
    return 1+ dfs(i+1, j, A, count+1) + dfs(i, j+1, A, count+1) + dfs(i-1, j, A, count+1) + dfs(i, j-1, A, count+1) + dfs(i+1, j+1, A, count+1)+ dfs(i+1, j-1, A, count+1)+ dfs(i-1, j+1, A, count+1) + dfs(i-1, j-1, A, count+1);
    
    
    
    
}


int Solution::solve(vector<vector<int> > &A) {

    int n=A.size();
    int m=A[0].size();
    
    int ans=-1;
    
    for(int i=0; i<n; i++){
        
        for(int j=0; j<m; j++){
            int count=0;
            
            if(A[i][j]==1){
                ans=max(ans, dfs(i,j,A, count));
                // dfs(i,j,A, count);
                // cout<<count<<endl;
                // if(count> ans){
                //     ans=count;
                // }
            }
            
        }
    }
    
    return ans;
    
    
    
    
}

