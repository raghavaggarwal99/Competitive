#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
    long long int n,m,k;
    cin>>n>>m>>k;
 
    int *a=new int[n];
    unordered_map<int,int> x;
 
int p=0;
 
    for(int i=0; i<n; i++){
        cin>>a[i];
 
        if(a[i]<=m){
            x[p]++;
        }
        else{
            p++;
        }
    }
 
long long int sum=0;
 
for(int i=0; i<=p; i++){
    if(x[i]==0){
        continue;
    }
 
    else if(x[i]>=k){
        sum+=x[i]-k+1;
    }
 
 
}
 
cout<<sum<<endl;
 
 
    
}
