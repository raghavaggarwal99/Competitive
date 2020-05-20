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
       
        // int total=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
           
        }
        
        sort(a,a+n);
        int count=0;
        
        
        ll ans=0;
        
        
        for(ll i=1;i<n;i++){
            if(a[i]-a[i-1]==1){
                count++;
            }
            else if(a[i]==a[i-1]){
                continue;
            }
            else{
                count=0;
            }
            if(count>ans){
                ans=count;
            }
           
        }
        
        // cout<<a[n-1]-a[0]-2*k<<endl;
        
        
        
     cout<<ans+1<<endl;
        
        

    }
    
    return 0;
}
