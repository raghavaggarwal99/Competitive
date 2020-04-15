#include<bits/stdc++.h>
#include<unordered_map>
typedef long long int ll;
 
#define pp pair<ll,ll>
#define MAXN 1000050
using namespace std;
 
 
   long long k,o,i,j,n,m;
 
int main(){
    cin>>n;
    int *a=new int[n+1];
    for(i=0;i<n;i++)
    cin>>a[i];
 
    k=1;
    for(i=1;i<n;i++)if(a[i]>=a[i-1])k++;else o=max(o,k),k=1;
    o=max(o,k);
    cout<<o;
}
 
