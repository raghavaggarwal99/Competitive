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
        // ll b[m];
        // int total=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
           
        }
        cin>>k;
        sort(a,a+n);
        int ans=INT_MAX;
        
        for(ll i=0;i<=n-k;i++){
            // cout<<i+k<<endl;
            // cout<<a[i+k-1]-a[i]<<endl;
            if((a[i+k-1]-a[i])<ans){
                ans=a[i+k-1]-a[i];
            }
           
        }
        
        cout<<ans<<endl;
        
     // cout<<a[k]-a[0]<<endl;
        
        

    }
    
    return 0;
}
