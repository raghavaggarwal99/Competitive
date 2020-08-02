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
    
  int a,b,c;
  cin>>a>>b>>c;
 
  int x=min(a, min(b-1, c-2));
 
 
  cout<<x+x+1+x+2<<endl;
  
 
 
 
 
}
