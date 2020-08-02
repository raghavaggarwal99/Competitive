#include<stdio.h>
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b){
    if(a>b)
    return a;
    return b;
}
 
int main()
{
 
string str;
 
cin>>str;
int count=0;
int ans=0;
 
for(int i=0; i<str.length(); i++){
 
    if(str[i]=='M'){
        count++;
    }
    else if(count>0){
        ans++;
        ans=max(ans, count);
    }
}
    
cout<<ans<<endl;
 
}
 
