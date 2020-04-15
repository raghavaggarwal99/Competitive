#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
 
using namespace std;
 
int main(){
 
   long long int n;
    cin>>n;
    
   int *a=new int[n];
    int max=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    
    long long int sum=0;
    for(int i=0; i<n; i++){
        sum+=max-a[i];
    }
    
    cout<<sum<<endl;
   
}
