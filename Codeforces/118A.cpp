#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
  string str;
  cin>>str;
 
  for(int i=0; i<str.length(); i++){
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||                     str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O'|| str[i]=='U' || str[i]=='y' || str[i]=='Y'){
          continue;
      }
 
      else if(str[i]>=97 && str[i]<=122){
          cout<<"."<<str[i];
      }
      else if(str[i]>=65 && str[i]<=90){
          str[i]+=32;
          cout<<"."<<str[i];
      }
 
 
  }
 
 
 
}
