#include<cstdio>
#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map> 
using namespace std;
int main()
{
  long long int n,m;
  cin>>n>>m;
 
    vector<vector<int>> v(21);
unordered_map<int,int> x;
 
int *b=new int[m+1];
 
for(int i=1; i<=m; i++){
    long long int a,d;
    cin>>a>>d;
    if(x[d]!=1){
        b[i]=d;
        x[d]=1;
    }
 
v[d].push_back(a);
 
}
 
sort(b+1, b+m+1, greater<int>()); 
 
long long int sum=0;
int z=0;
 
 
for(int i=1; i<=m; i++){
 
 
sort(v[b[i]].begin(), v[b[i]].end());
 
    for(int j=0; j<v[b[i]].size(); j++){
        //cout<<v[b[i]][j]<<" ";
 
        if(v[b[i]][j]>=n){
            sum+=n*b[i];
            z=1;
            break;
        }
        else{
            n-=v[b[i]][j];
            sum+=v[b[i]][j]*b[i];
        }
        //cout<<sum<<endl;
    }
    //cout<<endl;
 
    if(z==1){
        break;
    }
}
 
 
cout<<sum<<endl;
 
 
 
}
