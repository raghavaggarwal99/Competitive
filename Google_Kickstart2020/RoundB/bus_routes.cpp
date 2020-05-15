#include <bits/stdc++.h> 
using namespace std; 

int main(){
   long long int t;
    cin>>t;
    
  for(int k=0; k<t; k++){
     
    
      long long int n,d;
      cin>>n>>d;
      
     long long int *a=new long long int[n];
   
      
      for(int i=0; i<n; i++){
          cin>>a[i];
      }
     
      // int minn=INT_MAX;
      
      // vector<int> a;
       long long int *b=new  long long int[n];
      
      long long int x=d/a[n-1];
    long long int c=a[n-1]*x;
      
      b[n-1]=c;
      d=min(d,b[n-1]);
      
      for(int i=n-2; i>=0; i--){
         
          x=d/a[i];
          // c=a[i]*x;
    
          c=a[i]*x;
           
           b[i]=c;
            d=min(d,b[i]);  
             
        
          
          
      }
      
      //  for(int i=0; i<n; i++){
      //     cout<<b[i]<<" ";
      // }
      
      
      
      cout<<"Case #"<<k+1<<": "<<b[0]<<endl;
      // cout<<count<<endl;
      
      
      
  }
    
    
}
