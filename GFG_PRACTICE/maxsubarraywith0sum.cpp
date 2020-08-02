int maxLen(int A[], int n) {
    // Your code here
        long long int sum=0;
    int maxx=INT_MIN;
    map<int,vector<int>>m;
    m[0].push_back(-1);
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        m[sum].push_back(i);
    }
    map<int,vector<int>>::iterator i;
    for(i=m.begin();i!=m.end();i++)
    {
        int len = i->second.size();
        if(maxx < i->second[len-1] - i->second[0])
            maxx = i->second[len-1] - i->second[0];
    }
    return maxx;
}

