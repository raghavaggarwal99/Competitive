#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
 int n;
 cin>>n;
 
 
int *a=new int[n];
long long int sum=0;
 
for(int i=0; i<n; i++){
    cin>>a[i];
    sum+=a[i];
}
int count=0;
 
 
for(int i=0; i<n; i++){
    if((sum-a[i])%2==0){
        count++;
    }
}
 
cout<<count<<endl;
 
 
 
 
 
}
