#include<stdio.h>
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
long long int n,j;
 
    cin>>n;
    
    int *a=new int[n+2];
    
 
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
 
    sort(a+1,a+n+1);
    
 
long long int sum=0;
long long int k=a[n];
int c=0;
 
    for(int i=1; i<=n; i++){
        sum+=k-a[i];
    }
  if(sum>=k){
      c=1;
  }
    
if(c==0){
    while(1){
        k++;
        sum+=n;
        if(sum>=k){
            break;
        }
    }
}
 
cout<<k<<endl;
       
    
}
