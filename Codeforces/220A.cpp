#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
    else
    return b;
}
 
int main()
{
  
 long long int n;
 cin>>n;
 int *a=new int[n];
int *b=new int[n];
 
int count=0;
 
 for(int i=0; i<n; i++){
     cin>>a[i];
     b[i]=a[i];
 }
 
sort(b,b+n);
 
for(int i=0; i<n; i++){
     if(a[i]!=b[i]){
         count++;
     }
 
     if(count>2){
         cout<<"NO"<<endl;
         return 0;
     }
 }
 
cout<<"YES"<<endl;
 
 
}
 
