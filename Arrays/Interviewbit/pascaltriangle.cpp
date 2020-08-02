vector<vector<int> > Solution::solve(int A) {
    
    
    vector<vector<int>> ans(A);;
    
    if(A==0){
        return ans;
    }
    
    
    ans[0].push_back(1);
    
    if(A==1){
        return ans;
    }
    int n=2;
    // cout<<ans[0][0];
    
    // return ans;
    while(1){
        
        if(n>A){
            return ans;
        }
        ans[n-1].push_back(1);
        
        for(int j=1; j<n-1; j++){
            ans[n-1].push_back(ans[n-2][j]+ans[n-2][j-1]);
        }
        ans[n-1].push_back(1);  
        n++;
        
    }
    
    
    
    
    
}

