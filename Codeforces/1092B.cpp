#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
 
  long long int n;
  cin>>n;
 
  int *a=new int[n+1];
 
  for(int i=0; i<n; i++){
      cin>>a[i];
 
  }
  long long int count=0;
 
sort(a,a+n);
 
for(int i=0; i<n; i+=2){
      count+=a[i+1]-a[i];
      
  }
  cout<<count<<endl;
  
  
 
}
 
