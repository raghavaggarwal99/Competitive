#include <iostream>
#include <cstdio>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
   long long int n;
   cin>>n;
unordered_map<int, int> x;
unordered_map< int,int> y;
 
   stack<int> A;
   stack<int> B;
 
   for(int i=0; i<n; i++){
       char c;
       int v;
       cin>>c>>v;
 
       if(c=='L'){
           A.push(v);
           x[v]=A.size();
           y[v]=0;
       }
       else if(c=='R'){
           B.push(v);
           x[v]=B.size();
           y[v]=1;
       }
       else{
           if(y[v]==0){
                cout<<min(A.size()-x[v],B.size()+x[v]-1)<<endl;
            }
            else{
             cout<<min(x[v]+A.size()-1,B.size()-x[v])<<endl;
            }
       }
   }
 
 
}
