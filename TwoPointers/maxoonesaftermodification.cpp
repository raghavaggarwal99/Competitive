int Solution::solve(vector<int> &A, int B) {
    
 
    
    
    int n=A.size();
    if(n==0) return 0;
    
    int i=0,j=0,ans=0;
    
    while(i<n-ans)
    {
        j=i;
        int count=B;
        
        while((count || A[j]==1) && j<n)
        {
            if(A[j]==0) count--;
            j++;
        }
        ans=max(ans,j-i);
        i++;
    }
    return ans;
        
    
    
    
    
}

