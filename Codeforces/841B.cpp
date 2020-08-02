#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
 
    return b;
}
 
 
int main()
{
 
 
 int n;
 cin>>n;
 
 long long int *a=new long long int[n];
int v=0;
 for(int i=0; i<n; i++){
     cin>>a[i];
 
   
    if(a[i]%2!=0){
         v=1;
     }
 }
 
 
 
if(v==1){
    cout<<"First"<<endl;
    return 0;
}
else{
    cout<<"Second"<<endl;
    return 0;
}
 
 
 
}
 
