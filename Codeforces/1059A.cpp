#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
   long long int n,l,a;
   cin>>n>>l>>a;
   
   int *b=new int[n];
   int *m=new int[n];
   
   long long int count=0;
   
   if(n==0){
       cout<<l/a<<endl;
       return 0;
   }
   
   long long int g=a;
   long long int h=0;
   
   
   for(int i=0; i<n; i++){
       cin>>b[i]>>m[i];
   
   }
   
   
       count+=((b[0])/a);
   
   //cout<<count<<endl;
   
   for(int i=0; i<n-1; i++){
       int sum=0;
       
       sum=b[i]+m[i];
       if(sum==l){
           break;
       }
       
       
       
           count+=((b[i+1]-sum)/a);
       
       //cout<<count<<endl;
       
   }
   
       count+=((l-(b[n-1]+m[n-1]))/a);
   
   
   cout<<count<<endl;
   
   
}
