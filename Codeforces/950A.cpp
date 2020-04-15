#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int max(int a,int b){
 
if(a>b)
return a;
else
return b;
 
}
 
int min(int a,int b){
 
if(a>b)
return b;
else
return a;
 
}
 
int main(){
 
long l,r,a;
cin>>l>>r>>a;
 
if(l==r){
cout<<2*(l+a/2)<<endl;
return 0;
}
 
long h=min(l,r);
long j=max(l,r);
long d=j-h;
 
if(a>=(j-h)){
h+=d;
a-=d;
}
else{
 
h+=a;
a=0;
 
}
//cout<<l<<endl;
//cout<<r<<endl;
//cout<<a<<endl;
long k;
if(h==j)
k=h;
else
k=min(h,j);
//cout<<k<<endl;
//cout<<a<<endl;
 
cout<<2*(k+a/2)<<endl;
return 0;
 
 
 
}
