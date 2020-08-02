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
        cin>>n;
        ll a[n];
        ll b[n];
        // int total=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
           
        }
         for(ll i=0;i<n;i++){
            cin>>b[i];
           
        }
        
        
        sort(a,a+n);
        sort(b,b+n, greater<int>());
        ll ans=0;
        
        for(ll i=0;i<=n-1;i++){
          ans+=a[i]*b[i];
           
        }
        
        cout<<ans<<endl;
        
     // cout<<a[k]-a[0]<<endl;
        
        

    }
    
    return 0;
}
