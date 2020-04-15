#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
  long long int dp[5005][5005];
long long int a[5005];
long long int  sum[5005];
 
int main()
{
 
int n,m,k;
 
    cin>>n>>m>>k;
    
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(i<=m)
            {
                sum[i]=sum[i-1]+a[i];
            }
            else
            {
                sum[i]=sum[i-1]+a[i]-a[i-m];
            }
        }
 
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
        {
            for(int kk=1;kk<=k;kk++)
            {
                if(i>=m)
                {
                    dp[kk][i]=max(dp[kk][i-1],dp[kk][i]);
                    dp[kk][i]=max(dp[kk-1][i-m]+sum[i],dp[kk][i]);
                }
 
            }
        }
        cout<<dp[k][n]<<endl;
    
}
