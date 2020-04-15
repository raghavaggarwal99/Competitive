#include <cstdio>
#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
int main(){
 
int n;
cin>>n;
 
int *a=new int[n];
int w=0;
unordered_map<int,int> x;
for(int i=0; i<n; i++){
    cin>>a[i];
    if(x[a[i]]==0){
        x[a[i]]=1;
        w++;
    }
   
}
   
   sort(a,a+n);
int count=0;
int q=0;
 
for(int i=1; i<n; i++){
 
    if(a[i]-a[i-1]==0){
        continue;
    }
 
    else{
        q++;
        if(count==0){
            count=a[i]-a[i-1];
        }
        else if(count!=a[i]-a[i-1]){
            cout<<"-1"<<endl;
            return 0;
        }
           
 
    }
 
}
if(w>=4){
    cout<<"-1"<<endl;
            return 0;
}
 
if(q==0){
    cout<<"0"<<endl;
    return 0;
}
if(q==1){
    int j=(a[n-1]-a[0])/2;
    if((a[n-1]-a[0])%2!=0){
        cout<<a[n-1]-a[0]<<endl;
        return 0;
    }
    cout<<j<<endl;
    return 0;
}
 
cout<<count<<endl;
 
}
