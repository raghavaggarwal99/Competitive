#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
 
{
 
int n;
cin>>n;
 
int *a=new int[n];
 
for(int i=0; i<n; i++){
    cin>>a[i];
}
 
sort(a,a+n);
 
for(int i=0; i<n; i++){
    if(a[i]!=i+1){
        cout<<i+1<<endl;
        return 0;
    }
}
 
cout<<n+1<<endl;
 
 
}
