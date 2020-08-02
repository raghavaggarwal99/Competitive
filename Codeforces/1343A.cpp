#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    
    long long int t,n;
    cin>>t;
    
    // int *a=new int[n];
    // string ans="";
    
    for(int k=0; k<t; k++){
        cin>>n;
     int i=2;
        
        while(1){
            long long int x=pow(2,i);
            x--;
            
            if(x>n){
                break;
            }
            
            if(n%x==0){
                cout<<n/x<<endl;
                break;
            }
            else{
                i++;
            }
            
            
        }
        
        
    }

}

