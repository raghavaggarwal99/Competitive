#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int C(int n,int m) 
{ 
    long long int  ans=1; 
    for(int i=1;i<=m;i++)
        ans=ans*(n-m+i)/i; 
 
 
        return ans; 
} 
 
 
int main()
{
 
 long long int n,m,t;
 cin>>n>>m>>t;
 
long long int sum=0;
 
 for(int i=4; i<=n; i++){
 
     if(i<=n && (t-i)<=m && (t-i)>=1){
     sum+=C(n,i)*C(m,t-i);
     }
 
 }
 
 cout<<sum<<endl;
 
 
 
}
