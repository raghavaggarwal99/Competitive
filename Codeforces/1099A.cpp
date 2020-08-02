#include<stdio.h>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int min(int a, int b){
    if(a>b)
    return b;
    return a;
}
 
int main()
{
 
   long long int w,h,a,b,c,d;
   cin>>w>>h>>a>>b>>c>>d;
 
long long int sum=w;
 
 
 
for(int i=h; i>=1; i--){
    sum+=i;
 
    if(i==b){
        sum-=a;
        if(sum<0){
            sum=0;
        }
    }
    if(i==d){
        sum-=c;
        if(sum<0){
            sum=0;
        }
    }
}
 
cout<<sum<<endl;
 
}
