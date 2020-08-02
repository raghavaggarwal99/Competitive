#include <bits/stdc++.h> 
using namespace std; 
 
int main(){
   long long int t;
    cin>>t;
    
  for(int k=0; k<t; k++){
     
    
      long long int x,n,m;
      cin>>x>>n>>m;
      
     
         while(n>0 && x>20){
             x=x/2+10;
             n--;
         }
          while(m>0){
              x-=10;
              m--;
          }
  
      
      if(x<=0){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
     
      
      
  }
    
    
    
}

