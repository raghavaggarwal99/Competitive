#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main ()
 
{
 
    long long int n;
    cin>>n;
 
    long long int *a=new long long int[n];
 
    for(int i=0; i<n; i++){
        cin>>a[i];
        //cout<<a[i]<<" ";
    }
 
    for(int i=1; i<n-1; i++){
        if(((a[i]-a[0])*(a[i+1]-a[i]))<0){
            cout<<"3"<<endl;
            cout<<"1"<<" "<<i+1<<" "<<i+2<<endl;
            return 0;
        }
    }
 
    cout<<"0"<<endl;
 
 
 
}
