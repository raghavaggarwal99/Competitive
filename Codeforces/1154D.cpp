#include <cstdio>
#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
int main(){
 
int n,b,q;
cin>>n>>b>>q;
 
int *a=new int[n];
 
int copy=q;
 
for(int i=0; i<n; i++){
    cin>>a[i];
   
}
   
for(int i=0; i<n; i++){
 
    if(a[i]==0){
        if(q!=0)
            q--;
        else if(b!=0 && q==0){
            b--;
        }    
        else if(q==0 && b==0){
            cout<<i<<endl;
            return 0;
        }
    }
    if(a[i]==1){
 
        if(b!=0 && q!=copy){
            b--;
            q++;
        }
        else if(b!=0 && q==copy){
            q--;
        }
        else if(b==0 && q!=0){
            q--;
        }
        else if(q==0 && b==0){
            cout<<i<<endl;
            return 0;
        }
    }
 
 
 
 
}
 
cout<<n<<endl;
 
 
}
