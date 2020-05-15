#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    
   long long int t,n,k,m;
    cin>>t;
    
 
    for(int i=0;i<t;i++){
        cin>>n>>m;
        
     if(n==1){
         cout<<"0"<<endl;
     }
    else if(n==2){
        cout<<m<<endl;
    }
    else{
        cout<<2*m<<endl;
    }
        
    }
   
 
}
