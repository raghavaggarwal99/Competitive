#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
   long long int x,y,z,a,b,c;
   cin>>x>>y>>z>>a>>b>>c;
 
    if(a<x){
        cout<<"NO"<<endl;
        return 0;
    }
 
    a=a-x;
 
    if(a+b<y){
         cout<<"NO"<<endl;
        return 0;
    }
 
    if(a+b+c-y<z){
        cout<<"NO"<<endl;
        return 0;
    }
 
 
 cout<<"YES"<<endl;
        return 0;
 
  
 
 
 
}
