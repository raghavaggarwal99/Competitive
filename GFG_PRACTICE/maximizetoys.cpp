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
        cin>>n>>k;
        ll a[n];
       
        // int total=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
           
        }
        
        sort(a,a+n);
        
        
        
        ll ans=0;
        ll sum=0;
        
        for(ll i=0;i<=n-1;i++){
          sum+=a[i];
            if(sum<=k){
                ans++;
            }
            else{
                break;
            }
           
        }
        
        // cout<<a[n-1]-a[0]-2*k<<endl;
        
     cout<<ans<<endl;
        
        

    }
    
    return 0;
}
