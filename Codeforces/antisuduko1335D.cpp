#include <bits/stdc++.h> 
using namespace std; 

int main(){
   long long int t;
    cin>>t;
    
  for(int k=0; k<t; k++){
     
     vector<string> v;
      
      string s;
      
     
         for(int j=0; j<9; j++){
          cin>>s;
          // cout<<s<<endl;
          v.push_back(s);
         }
      
      
      v[0][0]=v[0][1];
      v[3][1]=v[2][1];
      v[6][2]=v[5][2];
      v[1][3]=v[0][3];
      v[4][4]=v[3][4];
      v[7][5]=v[6][5];
      v[2][6]=v[1][6];
      v[5][7]=v[4][7];
      v[8][8]=v[7][8];
      
      for(int i=0; i<9; i++){
          for(int j=0; j<9; j++){
          cout<<v[i][j];
        }
          cout<<endl;
      }
      
      
  }
    
    
    
}
