#include <bits/stdc++.h>
#include <iostream>
#include<unordered_map>
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
unordered_map<int,int> x;
 
long long int count=0;
 
   for(int i=0; i<n; i++){
       cin>>a[i];
       if(a[i]==i){
           count++;
       }
       else{
           x[i]=a[i];
       }
   }
 
if(count>=n-1){
    cout<<count<<endl;
    return 0;
}
int v=0;
 
for(int i=0; i<n; i++){
    if(x[i]!=0){
 
        int s=i;
        int b=x[i];
        if(x[b]==s){
            count+=2;
            v=1;
            break;
        }
    }
}
if(v==0){
    count++;
}
 
cout<<count<<endl;
 
}
