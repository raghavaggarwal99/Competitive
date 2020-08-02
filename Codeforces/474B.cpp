#include<cstring>
#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
 
int main(){
    long long int n,m,d;
    cin>>n;
 
int a[n+1];
 
a[0]=0;
for(int i=1; i<=n; i++){
    cin>>a[i];
    a[i]=a[i]+a[i-1];
}
 
cin>>m;
 
for(int i=0; i<m; i++){
    cin>>d;
 
   int ans= lower_bound(a+1, a+n+1, d)-(a);
   cout<<ans<<endl;
 
}
 
 
 
   
}
