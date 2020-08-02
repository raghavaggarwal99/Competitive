#include <bits/stdc++.h>
#include <iostream>
#include<unordered_map>
using namespace std;
 
int main () {
    
   long long int n,a,b;
   cin>>n;
 
long long int count=0;
 
 
   for(int i=0; i<n; i++){
       cin>>a>>b;
 
       if((b-a)>=2){
       count++;
       
       }
      
   }
 
cout<<count<<endl;
 
}
