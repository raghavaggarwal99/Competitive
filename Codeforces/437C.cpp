#include<bits/stdc++.h>
#include<iostream>
#include <unordered_map> 
using namespace std;
int min(int a, int b){
    if(a>b)
    return b;
    else
    return a;
}
int main()
{
    long long int n,m,x,y;
    
    cin>>n>>m;
 
    int *a=new int[n+1];
 
long long int sum=0;
 
  for(int j =1;j<=n;j++)
    {    
         
       cin>>a[j];
    }
 
for(int i=1; i<=m; i++){
    cin>>x>>y;
    
    sum+=min(a[x], a[y]);
 
}
 
    cout<<sum<<endl;
 
 
 
}
 
