#include<bits/stdc++.h>
typedef long long int ll;
#define pair<ll,ll> pii;
using namespace std;
int main()
{
        int i,j,k;
    int n,m;
    ll A,B,t=0;
    ll x,y,z;
 
    cin>>A>>B;
    cin>>x>>y>>z;
 
    if(A<(2*x+y))
        t+=((2*x+y)-A);
 
    if(B<(y+3*z))
        t+=((3*z+y)-B);
 
    cout<<t;
 
}
