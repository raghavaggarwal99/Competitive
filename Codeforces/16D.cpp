#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map> 
#include<algorithm>
using namespace std;
char s[10000];
int main()
{
  int n;
  cin>>n;
 
getchar();
long long int *a=new long long int[1000];
 
long long int count=1;
long long int count1=1;
 
for(int i=1; i<=n; i++){
 
      cin.getline(s,sizeof(s));
    
        long long int v1= (s[1]-'0')*10+(s[2]-'0');
        long long int v2= (s[4]-'0')*10+(s[5]-'0');
 
        if(v1==12){
            v1=0;
        }
 
        if(s[7]=='p'){
            v1+=12;
        }
 
        a[i]=v1*60+v2;
 
  }
 
long long int x=a[1];
 
  for(int i=2; i<=n; i++){
 
        if(a[i]<x){
            count1=1;
            count++;
        }
        else if(a[i]==x){
            count1++;
        }
        else{
            count1=1;
        }
 
        if(count1>10){
            count++;
            count1=1;
        }
        x=a[i];
 
  }
 
cout<<count<<endl;
 
 
 
}
 
