long long factorial(long n) 
{ 
    return (n == 1 || n == 0) ? 1 : (n * factorial(n - 1))%1000003; 
} 

int Solution::findRank(string A) {
    
    int n=A.size();
    
    long long ans=1;
    
    set<char> pre;
    set<char> vis;
    
    for(int i=0;i<n;i++)
        pre.insert(A[i]);
        
    for(int i=0;i<n;i++) {
        
        long long cnt=0;
        
        for(char j='A';j<='Z';j++) {
            if(j<A[i] and pre.find(j)!=pre.end() and vis.find(j)==vis.end())
                cnt++;
        }
        
        for(char j='a';j<='z';j++) {
            if(j<A[i] and pre.find(j)!=pre.end() and vis.find(j)==vis.end())
                cnt++;
        }
        
        vis.insert(A[i]);
        
        ans=(ans+cnt*factorial(n-1-i))%1000003;
    }
    
    return ans%1000003;
}
