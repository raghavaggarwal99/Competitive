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
    string ans="";
    
    for(int k=0; k<t; k++){
        cin>>n;
      int check=0;
        
        if(n<=3){
            cout<<"-1"<<endl;
        }
        else{
            if(n%2==0){
                n--;
                check=1;
            }
            
            for(int i=n; i>=1; i-=2){
                cout<<i<<" ";
            }
            cout<<"4"<<" ";
            if(check==1){
                n++;
            }
             for(int i=2; i<=n; i+=2){
                 if(i==4){
                     continue;
                 }
                 else{
                     cout<<i<<" "; 
                 }
            }
            cout<<endl;
        }
    }

}

