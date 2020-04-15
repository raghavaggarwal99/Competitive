#include<bits/stdc++.h>
typedef long long int ll;
#define pair<ll,ll> pii;
using namespace std;
ll maxXorSum(ll n, ll k) 
{ 
    // If k is 1 then maximum 
    // possible sum is n 
    if (k == 1) 
        return n; 
  
    // Finding number greater than 
    // or equal to n with most significant  
    // bit same as n. For example, if n is 
    // 4, result is 7. If n is 5 or 6, result  
    // is 7 
    ll res = 1; 
    while (res <= n) 
        res <<= 1; 
  
    // Return res - 1 which denotes 
    // a number with all bits set to 1 
    return res - 1; 
} 
  
// Driver program  
int main() 
{ 
    ll n ,k;
    cin>>n>>k; 
    cout << maxXorSum(n, k); 
    return 0; 
} 
