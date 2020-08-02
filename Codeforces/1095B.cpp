#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long int min(long long int a, long long int b){
    if(a<b)
    return a;
    return b;
}
 
int main()
{
  
  long long int n;
  cin>>n;
  
long long int *a=new long long int[n+1];
 
 
for(int i=1; i<=n; i++){
    cin>>a[i];
 
 
}
if(n==2){
    cout<<"0"<<endl;
    return 0;
}
 
sort(a+1, a+n+1);
 
long long int v=a[n]-a[2];
long long int c=a[n-1]-a[1];
 
long long int b=min(v,c);
 
cout<<b<<endl;
 
 
}
