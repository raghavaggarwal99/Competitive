#include<bits/stdc++.h>
typedef long long int ll;
#define pair<ll,ll> pii;
using namespace std;
 
// Driver program  
int main() 
{ 
    ll n ;
    cin>>n; 
    
    int *a=new int[n+1];
    a[0]=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
ll sum=0;
 
    for(int j=n; j>0; j-=2){
 
        ll x=a[j]*a[j];
        ll y=a[j-1]*a[j-1];
        sum+=abs(x-y);
 
 
    }
 
//cout<<sum<<endl;
cout << std::setprecision(16) << sum*3.1415926536 << '\n';
 
}
