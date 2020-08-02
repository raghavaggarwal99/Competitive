#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
   
  long long int n,x,y;
  long long int sum=0;
   cin>>n;
   
   
   
   for(long long int i=0; i<n; i++){
       cin>>x>>y;
       
      if((x+y)>sum){
          sum=x+y;
      } 
   }
   
   cout<<sum<<endl;
   
}
