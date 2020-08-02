#include <bits/stdc++.h> 
using namespace std; 

int main(){
   long long int t;
    cin>>t;
    
  for(int k=0; k<t; k++){
     
    
      long long int n;
      cin>>n;
      
     long long int *a=new long long int[n];
   
      
      for(int i=0; i<n; i++){
          cin>>a[i];
      }
     
      int count=0;
      
      
      for(int i=1; i<=n-2; i++){
          if(a[i]>a[i-1] && a[i]>a[i+1]){
              count++;
          }
      }
      cout<<"Case #"<<k+1<<": "<<count<<endl;
      // cout<<count<<endl;
      
      
      
  }
    
    
}
