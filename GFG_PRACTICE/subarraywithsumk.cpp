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
        cin>>n>>k;
        ll a[n];
        
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        
        ll start=0;
        ll sum=0;
        
        ll check=0;
        
         for(ll i=0;i<n;i++){
            sum+=a[i];
             
             if(sum==k){
                 check=1;
                 cout<<start+1<<" "<<i+1<<endl;
             }
             else if(sum>k){
                 while(start<=i){
                     if(sum<k){
                         break;
                     }
                     else if(sum==k){
                         cout<<start+1<<" "<<i+1<<endl;
                         check=1;
                         break;
                     }
                     sum-=a[start];
                     start++;
                 }
             }
             
             if(check==1){
                 break;
             }
            
             
             
        }
        
        if(check==0){
             cout<<"-1"<<endl;

        }
        
        
        
        
    }
    

 

    return 0;
}
