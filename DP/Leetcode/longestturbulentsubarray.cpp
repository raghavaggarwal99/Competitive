class Solution {
public:
    int maxTurbulenceSize(vector<int>& a) {
        
        int n=a.size();
        
    vector<vector<int>>dp(2,vector(n,1));
        
        
    //1 means even
        //0 means odd
        
    for(int i=1;i<n;i++)
    {
        if(a[i-1]<a[i]){
            dp[0][i]+=dp[1][i-1];
        }
        
        else if(a[i-1]>a[i]){
            dp[1][i]+=dp[0][i-1];
        }
    }
        
        
    return max(*max_element(dp[0].begin(),dp[0].end()),*max_element(dp[1].begin(),dp[1].end()));

        
        
    }
};
