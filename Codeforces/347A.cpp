#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int min(int a,int b){
    if(a>b)
    return b;
    else
    return a;
}
 
int main () {
    
   long long int n;
   cin>>n;
 
   int *a=new int[n];
 
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
 
if(n==1){
    cout<<a[0]<<" ";
    return 0;
}
 
   sort(a,a+n);
   int k=a[n-1];
   a[n-1]=a[0];
   a[0]=k;
 
for(int i=0; i<n; i++){
       cout<<a[i]<<" ";
   }
 
 
}
 
