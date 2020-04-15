#include <cstdio>
#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
int main(){
 
double n,x,y;
cin>>n>>x>>y;
 
double z=n*y/100;
 
double q=z-x;
 
if(q<=0){
    cout<<"0"<<endl;
    return 0;
}
if(q!=(int)q)
q++;
 
    cout<<((int)q)<<endl; 
 
 
 
 
}
