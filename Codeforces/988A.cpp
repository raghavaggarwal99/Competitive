#include <iostream>
#include<unordered_map>
using namespace std;
 
int main()
{
   int n,k;
   cin>>n>>k;
   int q=k;
 
   unordered_map<int,int> x;
   
  int *a=new int[n];
   int *b=new int[k];
   
   
  for(int i=0; i<n; i++){
      cin>>a[i];
      
      x[a[i]]++;
  }
  
  int j=0;
  
  for(int i=0; i<n; i++){
     
     if(x[a[i]]>=1){
         
         k--;
         b[j]=i+1;
         
         j++;
         x[a[i]]=0;
         
     }
     
     if(k==0)
     break;
     
  }
  
 
  if(k==0){
      
      cout<<"YES"<<endl;
      
      for(int v=0; v<q; v++)
          cout<<b[v]<<" ";
      
      
      
    }
  else{
      cout<<"NO"<<endl;
  }
  
}
