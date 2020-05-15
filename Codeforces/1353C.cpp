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
        cin>>n;
        
        long long int sum=0;
        
        if(n<3){
            cout<<"0"<<endl;
        }
        else{
        long long int d=1;
        long long int v=8;
            for(int j=3; j<=n; j+=2){
                // long long int v=pow(2,j);
                long long int x=(long long int)v*(long long int)d;
                // cout<<x<<endl;
                sum+=x;
                d++;
                v+=8;
            }
              cout<<sum<<endl;
        }
        
        // cout<<endl;
      
        
        
    }
   
 
}
