#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
    return b;
 
}
int main()
{
 
 int n;
 cin>>n;
 
 
int *a=new int[n+1];
long long int sum=0;
 
for(int i=0; i<n; i++){
    cin>>a[i];
    
}
int max=INT_MAX;
int c=0;
 
 
 
for(int i=1; i<=200; i++){
    int ans=0;
    for(int j=0; j<n; j++){
 
        int x=abs(a[j]-1-i);
        int y=abs(a[j]-i);
        int z=abs(a[j]-i+1);
 
        ans+=min(x, min(y,z));
 
 
 
 
    }
 
//cout<<ans<<endl;
 
if(ans<max){
    max=ans;
    c=i;
 
}
 
 
 
}
 
cout<<c<<" "<<max<<endl;
 
 
 
 
 
 
}
 
