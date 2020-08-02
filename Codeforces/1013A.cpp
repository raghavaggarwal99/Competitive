#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
 
 
 
 
int main(){
 
    long n;
    cin>>n;
    
    
    int *a=new int[n];
    int *b=new int[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    long sum=0;
    for(int i=0; i<n; i++){
        
        cin>>b[i];
        sum+=a[i]-b[i];
    }
    if(sum>=0){
        cout<<"Yes"<<endl;
        
    }
    else{
        cout<<"No"<<endl;
    }
    
    
    
    
    
}
