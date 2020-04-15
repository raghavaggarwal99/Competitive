#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
#include <iomanip> 
using namespace std;
 
int main()
{
 
int n;
cin>>n;
 
int *a=new int[n];
 
for(int i=0; i<n; i++){
    cin>>a[i];
}
 
sort(a,a+n);
long long int sum=0;
int count=0;
 
for(int i=0; i<n; i++){
    
 
    if(a[i]>=sum){
        sum+=a[i];
        count++;
    }
}
cout<<count<<endl;
 
 
}
