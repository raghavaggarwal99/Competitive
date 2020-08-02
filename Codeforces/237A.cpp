#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main(){
 
long long int n;
cin>>n;
 
int a,b,a1,b1;
 
int count=1;
int max=1;
 
cin>>a1>>b1;
//cout<<a1<<" "<<b1<<endl;
 
for(int i=1; i<n; i++){
    cin>>a>>b;
    //cout<<a<<" "<<b<<endl;
    
 if(a==a1 && b==b1){
     //cout<<a1<<" " <<b1<<endl;
     count+=1;
     if(count>max){
         max=count;
     }
     
 }
 else{
     count=1;
     
 }
 a1=a;
     b1=b;
 
  
}
  
 
cout<<max<<endl;
    
 
}
