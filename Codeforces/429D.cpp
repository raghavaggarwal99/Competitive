#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
    else
    return b;
}
 
int main()
{
  
     long long int n;
 
    
    cin>>n;
 
long long int *a=new long long int[n+1];
long long int *sum=new long long int[n+1];
sum[0]=0;
 
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
 
   long long int  ans=a[2]*a[2]+1;
 
    for(int i=1;i<n;i++){
        if(i*i>ans) break;
 
        long long int t=ans;
        for(int j=i+1;j<=n;j++){
           t=min(t,(sum[j]-sum[j-i])*(sum[j]-sum[j-i]));
                   }
        ans=min(ans,t+i*i);
        }
        cout<<ans<<endl;
 
}
 
