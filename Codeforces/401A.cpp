#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
 long long int n,m;
    cin>>n>>m;
 
    int *a=new int[n];
    long long int sum=0;
 
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
 
 
if(sum==0){
    cout<<"0"<<endl;
    return 0;
}
long long int count=abs(sum)/m;
 
if(abs(sum)%m!=0){
    count++;
}
 
 
 
     cout<<count<<endl;
        
 
 
 
    
}
 
