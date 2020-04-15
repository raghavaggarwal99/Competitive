#include <bits/stdc++.h>
#include<unordered_map>
#include<algorithm>
 
using namespace std;
#define ll long long int
const ll mod=1000000009;
ll kuaisumi(ll a,ll b)
{
    a%=mod;
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=ans*a;
            ans%=mod;
        }
        a=a*a;
        a%=mod;
        b/=2;
    }
    return ans;
}
 
int main()
{
    ll n,m,k;
    while(~scanf("%lld%lld%lld",&n,&m,&k))
    {
        ll yu=m-(k-1)*(n-m);
        if(yu<=0)
        {
            cout<<m<<endl;
 
        }
        else
        {
            ll zu=yu/k;
            ll output=((m-zu*k)%mod+mod)%mod;
            output%=mod;
            ll tmp=((kuaisumi(2,zu+1)-2)%mod+mod)%mod;
            tmp=((tmp*k)%mod+mod)%mod;
            output=((output+tmp)%mod+mod)%mod;
            cout<<((output+mod)%mod)<<endl;
        }
    }
}
