#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map> 
#include<algorithm>
using namespace std;
long long int min(long long int a, long long int b){
    if(a>b)
    return b;
    return a;
 
}
 
 
int main()
{
  long long int n,m,a,b;
  cin>>n>>m>>a>>b;
 
 
 
 
if(a==b){
    cout<<min(n,m)<<" "<<min(n,m)<<endl;
    return 0;
}
 
long long int v=__gcd(a,b);
a=a/v;
b=b/v;
 
 
 
   long long int a1=n/a;
   long long int a2=m/b;
 
if(a1==0 || a2==0){
    cout<<"0"<<" "<<"0"<<endl;
    return 0;
}
 
 
   if(a1<a2){
       cout<<a1*a<<" "<<a1*b<<endl;
       return 0;
   }
   else {
       cout<<a2*a<<" "<<a2*b<<endl;
       return 0;
   }
 
 
}
 
