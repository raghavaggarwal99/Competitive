#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int max(int a,int b){
    if(a>b)
    return a;
    else 
    return b;
 
}
 
int main()
{
 long long int n,m,a,b;
    cin>>n>>m;
 
long long int max2=INT_MIN;
long long int max1=INT_MIN;
 
for(int i=0; i<n; i++){
    cin>>a>>b;
 
    if(b<=m){
        if(a>max2){
            max2=a;
        }
    }
 
    else if(b>m){
            if(a-(b-m)>max1){
                max1=a-(b-m);
            }
    }
 
}
 
 
cout<<max(max1,max2);
    
}
