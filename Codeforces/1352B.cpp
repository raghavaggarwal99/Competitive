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
      
        int x=2;
        int y=1;
        
        if(n%2==0){
            
            long long int s=k-1;
            long long int w=n-2*s;
            long long int odd=n-s;
            
            if(s%2==0 && w%2==0 && w>0){
                cout<<"YES"<<endl;
                for(int j=0; j<k-1; j++){
                    cout<<"2"<<" ";
                }
                cout<<w<<endl;
                continue;
            }
            else if(odd%2!=0 && k%2==0 && odd>0){
                cout<<"YES"<<endl;
                for(int j=0; j<k-1; j++){
                    cout<<"1"<<" ";
                }
                cout<<odd<<endl;
                continue;
            }
            else{
                 cout<<"NO"<<endl;
                 continue;
            }
        }
        else{
            
            long long int s=k-1;
            long long int odd=n-s;
            if(k%2!=0 && odd%2!=0 && odd>0){
                cout<<"YES"<<endl;
                for(int j=0; j<k-1; j++){
                    cout<<"1"<<" ";
                }
                cout<<odd<<endl;
                continue;
            }
             else{
                 cout<<"NO"<<endl;
                 continue;
            }
        }
        
        
    }
    
   
    
    
    
}
