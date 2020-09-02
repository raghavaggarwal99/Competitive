int Solution::findMedian(vector<vector<int> > &A) {
    
    
    vector<int> b;
    int median;
    for(int i=0;i<A.size();i++)
        {
        for(int j=0;j<A[0].size();j++)
        {
            b.push_back(A[i][j]);
        }
    }
    
    sort(b.begin(),b.end());

    int n=b.size();
    
    if(b.size()%2!=0)
    {
    return b[((n+1)/2)-1];
    }
    
    else
    {
    median=(b[(n/2)-1]+b[((n+1)/2)-1])/2;
    
    return median;
}
    
    
    
    
    
    
    
    
    
    
}

