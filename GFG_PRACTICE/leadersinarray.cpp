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
        
        // int sum=;
        int check=INT_MIN;
        vector<int> ans;
        
        for(ll i=n-1;i>=0;i--){
           if(a[i]>=check){
               check=a[i];
               ans.push_back(a[i]);
           }
        }
        
        reverse(ans.begin(), ans.end());
        
        for(ll i=0;i<ans.size();i++){
           cout<<ans[i]<<" ";
        }
        
        if(ans.size()==0){
            cout<<"-1";
        }
        
        cout<<endl;
        
        

    }
    
    return 0;
}
