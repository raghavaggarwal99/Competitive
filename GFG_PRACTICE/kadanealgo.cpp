#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>

#define inf 1000000000000

ll c[100001];
using namespace std;

int main()
{
    

    ll k,t;
    ll n;

    cin>>t;
   
    for(int w=0; w<t; w++){
        cin>>n;
        ll a[n];
        
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        
       int ans=INT_MIN;
        ll sum=0;
        
        
        for(ll i=0;i<n;i++){
            sum+=a[i];
            if(sum>ans){
                ans=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        
        
        cout<<ans<<endl;
        
        
    }
    

 

    return 0;
}
