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
    
for(int i=0; i<=n+1; i++){
    a[i]=0;
}
 
 
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
 
 
    sort(a+1,a+n+1);
    
 
long long int sum=0;
 
 
    for(int i=n; i>=1; i-=k){
 
            int p=1;
 
        for(j=i; j>=i-k+1; j--){
 
            if(j==0){
                break;
            }
            sum+=abs(a[j]-p);
            
            p=a[j];
 
        }
        
        sum+=(a[j+1]-1);
 
        //cout<<sum<<endl;
 
    }
 
cout<<sum<<endl;
       
    
}
