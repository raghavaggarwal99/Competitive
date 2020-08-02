#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
int main()
{
   
    int n;
    cin>>n;
 
    long long int *a=new long long[n+1];
 
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
int count=0;
int max=0;
 
if(n==1){
    cout<<"1"<<endl;
    return 0;
}
if(n==2){
    cout<<"2"<<endl;
    return 0;
}
 
 
 
    for(int i=3; i<=n; i++){
 
        if(a[i-1]+a[i-2]==a[i]){
            count++;
        }
        else{
            count=0;
        }
 
        if(count>max){
            max=count;
        }
 
    }
 
    cout<<max+2<<endl;
 
 
}
 
