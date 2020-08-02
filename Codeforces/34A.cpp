#include <bits/stdc++.h>
#include <iomanip> 
#include<iostream>
#include<unordered_map>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
 
   int *a=new int[n+1];
 
   for(int i=1; i<=n; i++){
       cin>>a[i];
      
   }
 
int min=INT_MAX;
int index1=1;
int index2=2;
 
  for(int i=2; i<=n; i++){
 
            if(abs(a[i]-a[i-1])<min){
                min=abs(a[i]-a[i-1]);
                index1=i;
                index2=i-1;
            }
            
  }
 
  int b=abs(a[1]-a[n]);
  if(b<min){
      cout<<"1"<<" "<<n<<endl;
      return 0;
  }
 
  cout<<index1<<" "<<index2<<endl;
 
}
