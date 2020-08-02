#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
   
   long long int r,l;
   cin>>r>>l;
   
   long long int b=((l-r+1)/2);
   //cout<<b<<endl;
   
   cout<<"YES"<<endl;
   
   for(long long int i=1; i<=b; i+=1){
       
       cout<<r<<" "<<r+1<<endl;
       r=r+2;
       
       
   }
   
   
   
}
