#include <bits/stdc++.h> 
using namespace std; 

int main(){
   long long int t;
    cin>>t;
    
  for(int i=0; i<t; i++){
      long long int n,a,b;
      
      cin>>n>>a>>b;
      
       string ans="";
       for(int j=0; j<b; j++){
           ans+='a'+j;
       } 
      
        char v='a'+b-1;
      char x='a';
      for(int j=ans.length(); j<n; j++){
          if(x==v+1){
              x='a';
          }
          ans+=x;
          x++;
      }
  
      cout<<ans<<endl;
  }
    
    
    
}
