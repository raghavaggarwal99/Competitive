#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
    else
    return b;
}
 
int main()
{
  
 
 
    long long int n;
    cin>>n;
 
    long long int *a=new long long int[n+1];
long long int sum=0;
a[0]=0;
 
    for(int i=1; i<=n; i++){
 
       cin>>a[i];
       sum+=a[i];
        a[i]=a[i]+a[i-1];
 
        
 
    }
if(n<=2){
    cout<<"0"<<endl;
    return 0;
}
 
    long long int ans=0;
    
    long long int ans2=0;
 
    for(int i=1; i<n; i++){
 
        if(a[i]*3==2*sum){
                ans2=ans2+ans;
        }
 
        if(a[i]*3==sum){
            ans++;
        }
        
 
 
    }
 
    
cout<<ans2<<endl;
 
 
}
