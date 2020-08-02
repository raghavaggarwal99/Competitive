#include<iostream>
#include <bits/stdc++.h>
 
using namespace std;
int main(){
 
  long long int n;
  cin>>n;
  
int *a=new int[n];
 
  for(int i=0; i<n; i++){
    
    cin>>a[i];
    //cout<<a<<endl;
  }
  sort(a,a+n);
  
  
  
 // cout<<max<<endl;
  //cout<<min<<endl;
 
long long int count=0;
for(int j=0; j<n-1; j+=1){
  count+=a[j+1]-a[j]-1;
}
 
cout<<count<<endl;
//cout<<x[0.1]<<endl;
}
