//Tennis Tournament div1 A 
 
#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main(){
 
  long long int  n;
    cin>>n;
    
   //long *ans=new int[100];
    long long int  ans[100];
    ans[0]=1;
    ans[1]=2;
    
   long long int i=1;
   while(n>=ans[i]){
       
    ans[i+1]=ans[i]+ans[i-1];
       i++;
   }
    cout<<i-1<<endl;
    
}
