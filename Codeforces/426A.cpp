#include<stdio.h>
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
long long int n,k,j;
 
    cin>>n>>k;
    
    int *a=new int[n+2];
    j=0;
 
    for(int i=1; i<=n; i++){
        cin>>a[i];
       
    }
 
    sort(a+1,a+n+1);
 
    long long int sum=0;
 
 
    for(int i=1; i<n; i++){
        sum+=a[i];
       
    }
 
 
  if(sum<=k){
      cout<<"YES"<<endl;
  }
  else{
       cout<<"NO"<<endl;
  }
       
    
}
