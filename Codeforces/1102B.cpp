#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
    else
    return b;
}
 
int main()
{
  
unordered_map<int,int> x;
unordered_map<int,int> y;
vector<vector<int>> v(50001);
 
    long long int n,k;
    cin>>n>>k;
 
int *a=new int[n];
int *b=new int[n];
 
for(int i=0; i<n; i++){
    cin>>a[i];
 
    x[a[i]]++;
 
    b[i]=x[a[i]];
 
    if(x[a[i]]>k){
        cout<<"NO"<<endl;
        return 0;
    }
}
if(k>n){
     cout<<"NO"<<endl;
        return 0;
}
 
 
cout<<"YES"<<endl;
 
if(k==n){
    
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    return 0;
}
 
 
for(int i=0; i<k; i++){
        cout<<i+1<<" ";
        v[a[i]].push_back(i+1);
}
 
for(int j=k; j<n; j++){
 
 
 
    while(1){
        y[a[j]]++;
        long long int d=y[a[j]];
        
int p=0;
        for(int i=0; i<v[a[j]].size(); i++){
            if(v[a[j]][i]==d){
                p=1;
                break;
            }
 
        }
        if(p==0){
            cout<<d<<" ";
            break;
        }
 
    }
 
 
}
 
 
 
 
 
 
 
 
}
