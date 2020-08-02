#include <bits/stdc++.h> 
using namespace std; 

int main(){
   int t;
    cin>>t;
    
  for(int k=0; k<t; k++){
      
        int n;
        cin>>n;
      
      set<int> s;
      
      for(int i=0; i<n; i++){
          int v;
          cin>>v;
          s.insert(v);
      }
      unordered_map<int,int> x;
      
      
      int count=0;
      while(!s.empty()){
         
          int d=*s.begin();
          s.erase(d);
          if(x[d]==0){
              x[d]=1;
          }
          else{
              s.erase(d);
              continue;
          }
          // cout<<d<<endl;
          if(d%2==0){
              count++;
              s.insert(d/2);
          }
          
          
      }
      
        cout<<count<<endl;
      
      
  }
    
    
}
