#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main()
{
   long long int n;
   cin>>n;
 
    
    for(int i=0; i<n; i++){
       long long int a;
       cin>>a;
 
        if(a==1 || a==2 ||a==3 || a==5 || a==7 || a==11){
            cout<<"-1"<<endl;
            continue;
        }
 
       int t=a/4-a%2;
 
        if(t>0){
            cout<<t<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
 
 
    }
 
    
 
    
 
 
 
 
 
}
