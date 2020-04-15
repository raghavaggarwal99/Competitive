#include<iostream>
#include <bits/stdc++.h>
 
using namespace std;
int main(){
 
  long long int n,m,a,b;
  cin>>n>>m>>a>>b;
  
  //cout<<n<<endl;
  //cout<<m<<endl;
  
  long long int rem=n%m;
  //cout<<rem<<endl;
  
  long long int quotient=n/m;
  //cout<<quotient<<endl;
  
  long long int solve=m*quotient+m;
  
  if((rem*b)< ((solve-n)*a)){
      
      cout<<rem*b<<endl;
  }
  else
  cout<<((solve-n)*a)<<endl;
  
  
  
}
