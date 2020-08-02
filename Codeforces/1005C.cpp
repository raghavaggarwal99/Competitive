#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
 
using namespace std;
 
 
int main(){
 
   unordered_map<int,int> x;
    
    long long int n;
    cin>>n;
    
    int *a=new int[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        x[a[i]]++;
        
        
        
    }
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    
    sort(a,a+n);
    long long int max=a[n-1]+a[n-2];
   
   long long int d=log(max)/log(2);
  // cout<<d<<endl;
    
    long long int count=0;
    
   for(int i=0; i<n; i++){
     long long int min=0;
       int c=0;
       x[a[i]]--;
       for(int j=min; j<=d+1; j++ ){
           if(x[pow(2,j)-a[i]]>=1){
              // cout<<j<<endl;
               c=1;
               continue;
           }
       }
       x[a[i]]++;
       if(c==0){
           count++;
       }
   }
    cout<<count<<endl;
   
}
