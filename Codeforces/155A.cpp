#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
int min(int a, int b){
 
    if(a>b)
    return b;
    return a;
}
int max(int a, int b){
 
    if(a>b)
    return a;
    return b;
}
 
 
int main()
{
   
int n;
cin>>n;
 
long long int *a=new long long int[n+1];
for(int i=0; i<n; i++){
    cin>>a[i];
}
 
long long int max=a[0];
long long int min=a[0];
 
int count=0;
 
if(n==1){
    cout<<"0"<<endl;
    return 0;
}
 
for(int i=1; i<n; i++){
 
    if(a[i]<min || a[i]>max){
        count++;
    }
 
    if(a[i]>max){
        max=a[i];
    }
    if(a[i]<min){
        min=a[i];
    }
 
}
 
cout<<count<<endl;
 
  
}
