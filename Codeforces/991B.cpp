#include <bits/stdc++.h>
 
using namespace std;
 
int n;
int a[10005];
int main()
{
    cin>>n;
    int tot = int(double(n)*4.5+0.5);
    int sum = 0;
    for (int i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
    }
    sort(a,a+n);
    int ans = 0;
    for (int i=0; i<n; i++){
        if (sum>=tot){ ans = i; break;}
        sum += 5-a[i];
        if (sum>=tot){ ans = i+1; break;}
    }
    cout<<ans<<endl;
    return 0;
}
