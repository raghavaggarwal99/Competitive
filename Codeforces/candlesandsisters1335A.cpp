#include <bits/stdc++.h> 
using namespace std; 

int main(){
   long long int t;
    cin>>t;
    
  for(int i=0; i<t; i++){
      long long int n;
      
      cin>>n;
      
     
    if(n%2==0){
        n=n/2;
        cout<<n-1<<endl;
    }
    else{
        long long int copy=n/2;
        copy=copy+1;
        cout<<n-copy<<endl;
        
    }  
      
  
      
  }
    
    
    
}
