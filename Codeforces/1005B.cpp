//
#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<string.h>
using namespace std;
 
int min(int a,int b){
    if(a>=b)
    return b;
    
    return a;
    
}
 
int main()
{
 
 string str1;
 string str2;
 
 cin>>str1;
 cin>>str2;
 
 //cout<<str1<<endl;
 //cout<<str2<<endl;
 
 int v=min(str1.size(), str2.size());
 
 int n1=str1.size();
 int n2=str2.size();
 
 
int i=1;
 
int count=0;
 
while(1){
    
    if(i>v)
    break;
    
    if(str1[n1-i]!=str2[n2-i])
    break;
    
    count++;
    i++;
    
}
 //cout<<count<<endl;
 
 cout<<(str1.size()+str2.size()-(2*count))<<endl;
 
  
}
