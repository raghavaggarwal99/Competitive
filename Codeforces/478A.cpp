#include<stdio.h>
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
long long int n,k,j;
 
    
    
    int *a=new int[n+2];
    j=0;
long long int sum=0;
    for(int i=1; i<=5; i++){
        cin>>a[i];
       sum+=a[i];
    }
 
  if(sum%5==0 && sum!=0){
      cout<<sum/5<<endl;
  }
  else{
      cout<<"-1"<<endl;
  }
 
 
   
    
}
