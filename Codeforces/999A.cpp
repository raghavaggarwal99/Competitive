#include <iostream>
 
using namespace std;
 
int main()
{
   int n,k,v;
   cin>>n>>k;
  
  int *a=new int[n];
  
  for(int i=0; i<n; i++){
      cin>>a[i];
  }
  int start=0;
  int end=n-1;
  int count=0;
 
 
 for(int i=0; i<n; i++){
     
     if(a[i]<=k)
     count++;
     else{
         v=i;
         break;
     }
     
 }
 if(count<n){
     
     for(int j=n-1; j>=v; j--){
         if(a[j]<=k)
         count++;
         else
         break;
         
     }
     
 }
 
 
 cout<<count<<endl;
  
}
