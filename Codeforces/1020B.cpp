#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
 
using namespace std;
 
int main(){
 
   long long int n;
    cin>>n;
    
   int *a=new int[n];
    int *b=new int[n];
    
   // unordered_map<int,int> x;
    
    for(int i=0; i<n; i++){
        cin>>a[i];
       
    }
    //int count=1;
    for(int i=0; i<n; i++){
        unordered_map<int,int> y;
        int p=i+1;
        while(1){
           // cout<<p<<endl;
           y[p]++;
            //cout<<y[p]<<endl;
            if(y[p]==2){
               // cout<<"fd"<<endl;
                b[i]=p;
                break;
            }
            else{
            int k=a[p-1];
                p=k;
            }
        }
        
    }
    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
    
}
