#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
int *a=new int[n];
unordered_map<int,int> x;
 
 
for(int i=0; i<n; i++){
cin>>a[i];
}
 
if(n==2){
 
  cout<<"1"<<" "<<"1"<<endl;
  return 0;
}
 
 
sort(a,a+n);
 
if(a[n-1]==a[n-2]){
    cout<<a[n-1]<<" "<<a[n-1]<<endl;
    return 0;
}
 
 
 
long long int v=a[n-1];
 
 
for(int i=0; i<n-1; i++){
 
    if(x[a[i]]==0){
        if(a[n-1]%a[i]==0){
            x[a[i]]=1;
            a[i]=0;
        }
    }    
 
}
a[n-1]=0;
sort(a,a+n);
 
cout<<v<<" "<<a[n-1]<<endl;
 
 
 
 
 
}
