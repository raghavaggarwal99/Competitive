#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main(){
 
long long int n;
cin>>n;
int a,b,c;
int count=0;
 
for(int i=0; i<n; i++){
    
    cin>>a>>b>>c;
    if((a==1 && b==1) || (b==1 && c==1) || (c==1 && a==1) || (a==1 && b==1 && c==1)){
        
        count++;
        
    }
    
}
 
cout<<count<<endl;
 
}
