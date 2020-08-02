#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
int *a=new int[n+1];
int *sum=new int[n+1];
for(int i=0; i<n; i++){
    sum[i]=0;
}
 
for(int i=1; i<=n; i++){
    cin>>a[i];
    sum[i]=a[i]+sum[i-1];
}
 
 
int count=0;
 
for(int i=1; i<n; i++){
    if(sum[i]==sum[n]-sum[i]){
        count++;
    }
}
 
cout<<count<<endl;
 
}
