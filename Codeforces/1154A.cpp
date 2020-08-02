#include <cstdio>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 
long long int *a=new long long int[4];
for(int i=0; i<4; i++){
    cin>>a[i];
}
   
    sort(a,a+4);
 
long long int ans1=a[3]-a[0];
long long int ans2=a[3]-a[1];
long long int ans3=a[3]-a[2];
 
cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<endl;
 
 
}
