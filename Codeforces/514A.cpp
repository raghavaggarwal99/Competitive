#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
    else
    return b;
}
 
int main()
{
  
  string str;
  cin>>str;
int p=0;
 
int *a=new int[str.length()+1];
 
  for(int i=0; i<str.length(); i++){
      a[p]=str[i]-'0';
      
      p++;
  }
int c=0;
 
 
 
if(a[0]==9){
         c=1;
}
 
  for(int i=c; i<p; i++){
      
      a[i]=min(a[i], 9-a[i]);
  }
 
    for(int i=0; i<p; i++){
      cout<<a[i];
  }
}
 
