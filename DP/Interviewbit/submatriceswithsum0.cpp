int subwithzero(vector<int> &A){
    
    int sum=0;
    int count = 0;
    
    unordered_map<int,int> mp;
    
    mp[0] = 1;
    
    for(int i=0;i<A.size();i++){
        
        sum+=A[i];
        
        if(mp.find(sum)!=mp.end()) count+=mp[sum];
        
        mp[sum]++;
    }
    
    return count;
    
}

int Solution::solve(vector<vector<int> > &A) {
    
    int count = 0;
    
    int n = A.size();
    
    if(n==0){
        return 0;
    }
    
    int m = A[0].size();
    
    if(n==0 && m==0) return 0;
    
    
    for(int i=0;i<m;i++){
        
        vector<int> temp(n,0);
        
        for(int j=i; j<m;j++){
            
            for(int k=0;k<n;k++){
                
                temp[k] += A[k][j];
                
            }
           
            count+=subwithzero(temp);
        }

    }
    
    
    return count;
}


