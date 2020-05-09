#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    
    long long int t,n,k;
    cin>>t;
    
    // int *a=new int[n];
    
    for(int i=0; i<t; i++){
        cin>>n>>k;
      
        long long int s=n-1;
        long long int q=k/s;
        
        long long int w=k-((n-1)*q);
        // cout<<w<<endl;
        if(w==0){
            cout<<n*q-1<<endl;
        }
        else{
        cout<<n*q+w<<endl;
        }
        
    }
    
   
    
    
    
}
