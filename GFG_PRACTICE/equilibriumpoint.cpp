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
        int total=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            total+=a[i];
        }
        
        int sum=0;
        int check=0;
        for(ll i=0;i<n;i++){
            sum+=a[i];
            
            ll v=total-sum;
            
            if(v==sum-a[i]){
                cout<<i+1<<endl;
                check=1;
                break;
            }
        }
        
        if(check==0){
            cout<<"-1"<<endl;
        }

    }
    
    return 0;
}
