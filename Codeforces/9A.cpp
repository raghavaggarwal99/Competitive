#include<unordered_map>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int a,b;
   cin>>a>>b;
 
if(a>6 || b>6){
    cout<<"0"<<"/"<<"1"<<endl;
    return 0;
}
 
   int v=max(a,b);
 
   v=6-v+1;
 
   int x=__gcd(v,6);
 
   cout<<v/x<<"/"<<6/x<<endl;
 
}
