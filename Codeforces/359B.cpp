#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main(){
int n,k;
 
    cin>>n>>k;
 
    int *a=new int[2*n+1];
 
    for(int i=1; i<=2*n; i++){
        a[i]=i;
    }
 
    long long int v=n-2*k;
long long int copy=n;
 
 
int p=1;
 
    while(1){
        if(copy==v){
             for(int i=1; i<=2*n; i++){
                cout<<a[i]<<" ";
                }
            return 0;
        }
 
        int temp=a[p];
        a[p]=a[p+1];
        a[p+1]=temp;
        p+=4;
        copy-=2;
 
    }
 
}
