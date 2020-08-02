//1042C
#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
  
  long long int n,v,d;
  cin>>n;
  
char *str=new char[n];
 
for(int i=1; i<=n; i++){
    cin>>str[i];
}
cout<<str[1];
 
int i=1;
int sum=1;
 
while(1){
 
    if(sum>=n){
        break;
    }
 
    cout<<str[sum+1];
    i++;
    sum+=i;
 
    
 
 
}
 
 
 
}
 
