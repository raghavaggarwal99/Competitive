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
long long int y=INT_MAX;
long long int count=0;
//cout<<y<<endl;
 
for(int i=n-1; i>=0; i--){
 
     y=min(a[i],y-1);
    y=max(0,y);
    count+=y;
    //cout<<count<<endl;
 
 
}
 
 
cout<<count<<endl;
 
 
  
}
