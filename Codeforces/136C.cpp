#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n;
    cin>>n;
 
    long long int *a=new long long int[n+1];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
 
    sort(a,a+n);
 
    if(a[n-1]==1){
        a[n-1]=2;
    }
    else{
        a[n-1]=1;
    }
 
    sort(a,a+n);
 
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
