#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
   long long int n,b;
   cin>>n>>b;
 
   long long ans = 1000000000000000000LL;
    for (long long i=2; i<=b; i++) {
        if (1LL * i * i > b) i = b;
        int cnt = 0;
        while (b % i == 0) {b /= i; cnt++;}
        if (cnt == 0) continue;
        long long tmp = 0, mul = 1;
        while (mul <= n / i) {mul *= i; tmp += n / mul;}
        ans = min(ans, tmp / cnt);
    }
    cout << ans << endl;
 
 
}
