#include <iostream>
#include<unordered_map>
#include<climits>
using namespace std;
 
int main()
{
  int n,v;
  cin>>n;
  int q=0;
  int min=INT_MAX;
  long long int  sum=0;
  int *a=new int[n];
 unordered_map<int,int> x;
  for(int i=0; i<n; i++){
      cin>>a[i];
     x[a[i]]++;
     sum+=a[i];
     //cout<<a[i]<<endl;
     if(a[i]<min){
         
     min=a[i];
    // cout<<min<<endl;
     v=i+1;
     //cout<<v<<endl;
     }
     
  }
  
  //cout<<min<<endl;
  
  if(n==1){
      cout<<-1<<endl;
      q=2;
  }
  
  if(q==0){
  if(x[a[0]]==n && n==2){
      
      cout<<-1<<endl;
      
      q=1;
  }
  }
  
  if(q==0){
      cout<<n-1<<endl;
      for(int i=1; i<=n; i++){
          if(i==v)
          continue;
          else
          cout<<i<<" ";
      }
  }
  
}
