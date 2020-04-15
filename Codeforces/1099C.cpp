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
 
  string str;
  cin>>str;
 
int k,b;
cin>>k;
 
  int count1=0;
  int count2=0;
    int c=0;
 
str[str.length()]='1';
 
    for(int i=0; i<str.length(); i++){
 
        if(str[i]>=97 && str[i]<=122 && str[i+1]=='?'){
            count1++;
        }
        else if(str[i]>=97 && str[i]<=122 && str[i+1]=='*'){
            count2++;
        }
 
        if(str[i]>=97 && str[i]<=122 ){
            c++;
        }
 
    }
 
 
long long int v=count1+count2;
 
if(k<(c-v)){
    cout<<"Impossible"<<endl;
    return 0;
}
 
 
if(k==c){
    for(int i=0; i<str.length(); i++){
        if(str[i]=='?' || str[i]=='*'){
            continue;
        }
        else{
            cout<<str[i];
        }
    }
    return 0;
}
 
int q=0;
 
if(k>c){
 
    if(count2==0){
         cout<<"Impossible"<<endl;
        return 0;
    }
 
    int z=k-c;
    
    for(int i=0; i<str.length(); i++){
        if(str[i]=='?'){
            continue;
        }
        else if(str[i]>=97 && str[i]<=122 && str[i+1]=='*'){
            b=i+1;
            cout<<str[i];
            break;
        }
        else{
            cout<<str[i];
        }
    }
 
    for(int j=1; j<=(k-c); j++){
        cout<<str[b-1];
    }
    for(int j=b+1; j<str.length(); j++){
       if(str[j]=='?' || str[j]=='*'){
            continue;
        }
        else{
            cout<<str[j];
        }
    }
 
 
 
    return 0;
 
}
 
if(k<c){
 
    for(int i=0; i<str.length(); i++){
        if(str[i]>=97 && str[i]<=122 && str[i+1]=='?'){
            str[i]='?';
            q++;
        }
        if(str[i]>=97 && str[i]<=122 && str[i+1]=='*'){
            str[i]='?';
            q++;
        }
        if(q==(c-k)){
            break;
        }
    }
    for(int i=0; i<str.length(); i++){
        if(str[i]=='?' || str[i]=='*'){
            continue;
        }
        else{
            cout<<str[i];
        }
    }
    return 0;
 
}
 
 
 
 
}
