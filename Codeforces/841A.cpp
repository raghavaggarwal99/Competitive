#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
 
    return b;
}
 
 
int main()
{
 
 
 int n,k;
 cin>>n>>k;
 
 string str;
 cin>>str;
 
 unordered_map<char,int> x;
int v=0;
 for(int i=0; i<str.length(); i++){
     x[str[i]]++;
 
     if(x[str[i]]>k){
         v=1;
     }
 }
 
if(v==1) 
cout<<"NO"<<endl;
else  
cout<<"YES"<<endl;
 
 
}
