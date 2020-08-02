#include <iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
 
 
int main()
{
  long a,b,c,s,t;
  cin>>t;
  
  for(int i=0; i<t; i++){
  cin>>s>>a>>b>>c;
  
  long long int x=s/c;
  
  long long int v=x/a;
  
  cout<<(v*b)+x<<endl;
  }
    
    
}
