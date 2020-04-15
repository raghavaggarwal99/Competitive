#include <iostream>
#include <string>
#include <unordered_map>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   long long int n;
   cin>>n;
long long int copy=n;
   if(n<=2){
       cout<<"No"<<endl;
       return 0;
   }
 
    n=(n*(n+1))/2;
cout<<"Yes"<<endl;
 
for(int i=2; i<=sqrt(n); i++){
    if(n%i==0){
        cout<<"1 "<<i<<endl;
        cout<<copy-1<<" ";
        for(int j=1; j<=copy; j++){
            if(j==i){
                continue;
            }
            cout<<j<<" ";
        }
        break;
    }
    
}
 
   
 
 
 
   
}
