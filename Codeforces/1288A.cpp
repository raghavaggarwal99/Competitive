#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 


int main(){
  
  long long int t;
    cin>>t;
    
  for(int i=0; i<t; i++){
      long long int n,d;
      cin>>n>>d;
      int check=0;
      if(d<=n){
          cout<<"YES"<<endl;
          check=1;
      }
      else{
          for(int j=1; j<=sqrt(d)+1; j++){
                double v= (double)d/(j+1);
                // cout<<v<<endl;
              if(v==(int)v){
                  if(v+j<=n){
                      cout<<"YES"<<endl;
                      check=1;
                      break;
                  }
              }
              else{
                  int copy=(int)v;
                  copy+=1;
                  if(copy+j<=n){
                      cout<<"YES"<<endl;
                      check=1;
                      break;
                  }
              }
          }
      }
      if(check==0){
          cout<<"NO"<<endl;
      }
      
  }
    
    
}
    

