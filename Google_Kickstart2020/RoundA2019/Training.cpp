
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int T, t;
    cin>>T;
    for(int k=0; k<T; k++){
        int n, p;
        cin>>n>>p;
        
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        vector<int> s(n+1,0);
        
        
        for(int i=0; i<n; i++){
           s[i + 1] = s[i] + v[i];
        }
        
        
        int res = 1 << 30;
       //Answer will be min where total skill after being equal i.e. v[i - 1] * p- jo pehle actual the vaha tak
        // so 9*3=27 jab sab iske barabar ho jaayenge tab- jo pehle vaha tak sum tha 1+3+9=13
        for(int i=p; i<n+1; i++){
            res = min(res, v[i - 1] * p - (s[i] - s[i - p]));
        }
//         FOR(i, p, n + 1) res = min(res, v[i - 1] * p - (s[i] - s[i - p]));
        
        cout<<"Case #"<<k+1<<": "<<res<<endl;
    }

};
