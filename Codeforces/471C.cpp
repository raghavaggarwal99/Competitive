#include<bits/stdc++.h>
#include<iostream>
#include <unordered_map> 
using namespace std;
 
int main()
{
    long long int n;
    
    cin>>n;
long long int i=1;
n*=2;
while(1){
 
    if((3*i*i + i)>n){
        break;
    }
    i++;
 
}
n=n/2;
 
 
long long int count=0;
  for(int j =1;j<=i-1;j++)
    {    
         
        if(((n+j)%3)==0){
            count++;
        }
      
    }
 
 
 
    cout<<count<<endl;
 
 
 
}
