#include <bits/stdc++.h> 
using namespace std; 
 
int main(){
   long long int t;
    cin>>t;
    
  for(int k=0; k<t; k++){
     
    
      long long int a,b,c,d,x,y,z;
      cin>>a>>b>>c>>d;
      
       x=b;
      y=b;
        z=c;
      
      if(2*b>c){
          cout<<x<<" "<<y<<" "<<z<<endl;
      }
      else{
          x=b;
          y=c;
          z=c;
          cout<<x<<" "<<y<<" "<<z<<endl;
      }
     
      
      
  }
    
    
    
}
