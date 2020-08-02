#include <bits/stdc++.h> 
using namespace std; 

int main(){
    
   long long int t;
    cin>>t;
    
  for(int k=0; k<t; k++){
     
    
      long long int n,b;
      cin>>n>>b;
      
     long long int *a=new long long int[n];
    long long int sum=0;
    int count=0;
      
      
      for(int i=0; i<n; i++){
          cin>>a[i];
      }
     sort(a,a+n);
     
     for(int i=0; i<n; i++){
          sum+=a[i];
          count++;
          
          if(sum==b){
            break;   
          }
          else if(sum>b){
              count--;
              break;
          }
          
      }
        

      cout<<"Case #"<<k+1<<": "<<count<<endl;
    
      
      
      
  }
    
    
}
