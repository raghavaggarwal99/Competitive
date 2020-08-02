#include <bits/stdc++.h> 
using namespace std; 

int main(){
   int t;
    cin>>t;
    
  int a[t][3];
    
    for(int k=0; k<t; k++){
        for(int j=0; j<3; j++){
            cin>>a[k][j];
        }
    }
    
     for(int j=0; j<3; j++){
        long long int sum=0;
        
        for(int k=0; k<t; k++){
            sum+=a[k][j];
        }
       
        if(sum!=0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
         
      cout<<"YES"<<endl;
        

    
    
}
