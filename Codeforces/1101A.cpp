#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
 
    long long int n;
 
    cin>>n;
 
 
   
 
   for(int i=1; i<=n; i++){
       long long int l,r,d;
       cin>>l>>r>>d;
 
       if(d<l && d>0){
           cout<<d<<endl;
           continue;
       }
       
        long long int b=r/d;;
 
       if(b*d<=r){
 
            long long int x=d*b;
                if(x<=r){
                    cout<<x+d<<endl;
                    continue;
                }
 
            }
 
 
   }
 
 
 
}
