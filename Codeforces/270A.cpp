#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int max(int a,int b){
    if(a>b)
    return a;
    else 
    return b;
 
}
 
int main()
{
 long long int n,m,a,b;
    cin>>n;
 
 
 
for(int i=0; i<n; i++){
    cin>>a;
 
   b=180-a;
   if(360%b==0){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
    
}
}
