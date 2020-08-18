int Solution::maxProfit(const vector<int> &A) {
    
    
    int n=A.size();
    
    int i=0;
    
    long long int ans=0;
    
    if(n==0){
        return ans;
    }
    
    
    while(i<n-1){
        
        while(i<n-1 && A[i+1]<=A[i]){
            i++;
        }
        
        if (i == n - 1) 
            break; 
        
        int buy=i++;
        
        
        while ((i < n) && (A[i] >= A[i - 1])) {
            i++; 
        }
        
        
        int sell=i-1;
        
        // cout<<buy<<" "<<sell<<endl;
        
        ans+=A[sell]-A[buy];
        
        
        
        
    }
    
    
    return ans;
    

}


