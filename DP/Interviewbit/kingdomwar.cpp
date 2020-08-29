int Solution::solve(vector<vector<int> > &A) {
    
    int n=A.size();
    int m=A[0].size();
    
    for(int i=0;i<n;i++){
        int sum=A[i][m-1];
        
        for(int j=m-2;j>=0;j--){
            A[i][j]+=A[i][j+1];
            // sum=A[i][j];
        }
    }
    

    // for(int i=0;i<n;i++){
        
    //     for(int j=0;j<m;j++){
    //         cout<<A[i][j]<<" ";
    //         // sum=A[i][j];
    //     }
    //     cout<<endl;
    // }
    
    
    int ans=A[n-1][m-1];
    
    
    for(int i=0;i<m;i++){
        
        int sum=A[n-1][i];
        
        int mx=sum;
        
        for(int j=n-2;j>=0;j--){
            
            A[j][i]+=sum;
            sum=A[j][i];
            mx=max(mx,sum);
            
        }
        ans=max(ans,mx);
        
    }
    
    
    
    // for(int i=0;i<n;i++){
        
    //     for(int j=0;j<m;j++){
    //         cout<<A[i][j]<<" ";
    //         // sum=A[i][j];
    //     }
    //     cout<<endl;
    // }
    
    
    return ans;
    
    
    
    
    
    
    
    
    
    
}

