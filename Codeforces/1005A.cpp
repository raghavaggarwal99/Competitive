#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
  int n;
  cin>>n;
  
  int *a=new int[n];
  int count=0;
  
  for(int i=0; i<n; i++){
      cin>>a[i];
      if(a[i]==1){
          count++;
      }
  }
 
 cout<<count<<endl;
 int min=0;
 for(int i=0; i<n; i++){
     if(a[i]>min){
         
         min=a[i];
     }
     
     else{
         
         cout<<min<<" ";
         min=1;
         
     }
     
 }
 cout<<a[n-1]<<endl;
}
