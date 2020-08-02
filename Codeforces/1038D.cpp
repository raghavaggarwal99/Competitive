#include <iostream>
#include <string>
#include <unordered_map>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   long long int n;
   cin>>n;
int check1=0;
int check2=0;
long long int sum=0;
int k=INT_MAX;
 
int *a=new int[n+1];
for(int i=0; i<n; i++){
    cin>>a[i];
    if(a[i]>0){
        check1=1;
    }
    if(a[i]<0){
        check2=1;
    }
    k=min(k,abs(a[i]));
    sum+=abs(a[i]);
 
}
if(n==1){
    cout<<a[0]<<endl;
    return 0;
}
 
 
if(check1==1 && check2==1){
    cout<<sum<<endl;
}
else{
    cout<<sum-2*k<<endl;
}
 
 
 
   
}
