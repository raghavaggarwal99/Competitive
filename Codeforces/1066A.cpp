#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main() {
 
    int t,L,v,l,r,ans;
 
    cin>>t;
 
 
    for (int i=1; i<=t; i++)
    {
        cin>>L>>v>>l>>r;
        ans = (L/v) - ((r/v) - (l-1)/v);
        cout<<ans<<endl;
    }
 
    
}
