#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>

#define inf 1000000000000

ll c[100001];
using namespace std;

int main()
{
    

    ll k,t,m;
    ll n;

    cin>>t;
   
    for(int w=0; w<t; w++){
        cin>>n>>m;
        ll a[n+m];
        // ll b[m];
        
        for(ll i=0;i<n+m;i++){
            cin>>a[i];
        }
        
        sort(a,a+n+m);
      
        for(ll i=0;i<n+m;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
    

 

    return 0;
}
