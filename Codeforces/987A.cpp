#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
 
using namespace std;
int main(){
 
 int n;
 cin>>n;
 
 unordered_map<string,int> x;
 
int count=0;
 
 for(int i=0; i<n; i++){
     
     string str;
     cin>>str;
     if(x[str]==0){
     x[str]=1;
     count++;
     }
     
 }
 cout<<6-count<<endl;
 
 if( x["purple"]==0)
 cout<<"Power"<<endl;
 
 
 if(x["green"]==0)
 cout<<"Time"<<endl;
 
 if(x["blue"]==0)
 cout<<"Space"<<endl;
 
 if(x["orange"]==0)
 cout<<"Soul"<<endl;
 
 if(x["red"]==0)
 cout<<"Reality"<<endl;
 
 if(x["yellow"]==0)
 cout<<"Mind"<<endl;
 
 
  
}
