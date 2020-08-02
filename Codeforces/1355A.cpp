#include <bits/stdc++.h>

using namespace std;

long long int getAdd(long long int x) {
    long long int m1 = 10, m2 = 0;
    while(x > 0) {
        long long int y = x % 10;
        x /= 10;
        m1 = min(m1, y);
        m2 = max(m2, y);
    }
    return m1 * m2;
}
 
int main()
{
 
    int t;
    cin>>t;
    
    while(t--) {
        long long int x, k;
        cin>>x>>k;
        k--;
        while(k--) {
            long long int y = getAdd(x);
            if (y == 0) break;
            x += y;
        }
        cout<<x<<endl;
    }
 
    return 0;
}















