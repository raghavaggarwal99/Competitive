#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main(){
 
    long n,k,v,l;
    cin>>n>>k;
    
    int *a=new int[n];
    int *b=new int[n];
    int *c=new int[n];
    unordered_map<int,int> x;
    unordered_map<int,int> y;
    for(int i=0; i<n; i++){
        
        cin>>a[i];
        if(x[a[i]]==9){
            cout<<"0"<<endl;
            return 0;
        }
        else{
            x[a[i]]=9;
        }
        
        
    }
     for(int i=0; i<n; i++){
         
         l=a[i]&k;
         b[i]=l;
         //cout<<b[i]<<endl;
         if((x[l]==9) && (l!=a[i])){
             cout<<1<<endl;
             return 0;
         }
        
     }
    for(int i=0; i<n; i++){
        
        if(y[b[i]]==8){
            cout<<"2"<<endl;
            return 0;
        }
        else{
            y[b[i]]=8;
        }
         
    }
    
    
    cout<<-1<<endl;
    return 0;
    
    
}
