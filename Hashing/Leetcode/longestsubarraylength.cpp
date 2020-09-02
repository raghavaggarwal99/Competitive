int Solution::solve(vector<int> &A) {
    
   for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
        {
        A[i]=-1;
        }
    }
    
// find longest subarray with sum=1;
    int sum=1;
    int n=A.size();
    int currsum=0;
    int l=0;
    
    unordered_map<int,int>mp;
    int max=0;
    
    for(int i=0;i<n;i++)
    {
        currsum=currsum+A[i];
        
        if(currsum==sum)
        {
            l=i+1;
            if(l>max)
            {
            max=l;
            }
        }
        
        if (mp.find(currsum) == mp.end())
        mp[currsum] = i;
        
        if(mp.find(currsum-sum)!=mp.end())
        {
            l=i-mp[currsum-sum];
            if(l>max)
            {
            max=l;
            }
        }

    }
    return max;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

