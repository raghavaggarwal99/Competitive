//THe question is basically whether we from i we can reach a[i]
 
#include<iostream>
#include<bits/stdc++.h>
#include <iomanip> 
using namespace std;
 
int visited[110][110];
 
vector<int>v[110];
 
bool dfs(int start, int current, int value){
 
    visited[start][current]=1;
 
    if(current==value)
    return 1;
 
    for(int j=0; j<v[current].size(); j++){
        if(!visited[start][v[current][j]]){
            if(dfs(start, v[current][j], value))
            return 1;
        }
    }
 
    return 0;
 
 
}
 
 
int main()
{
 
 int n,d;
 cin>>n;
 
 int *a=new int[n+1];
 for(int i=1; i<=n; i++){
     cin>>a[i];
 }
 
 
    for(int i=1; i<=n; i++){
 
        cin>>d;
        v[i].push_back(i);
 
            if(i+d<=n){
                v[i].push_back(i+d);
                v[i+d].push_back(i);
            }
 
            if((i-d)>=1){
                v[i].push_back(i-d);
                v[i-d].push_back(i);
            }
 
 
    }
 
int q=0;
 
    for(int i=1; i<=n; i++){
 
        if(!dfs(i,i,a[i])){
            q=1;
            //break;
        }
    }
 
    if(q==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
 
}
