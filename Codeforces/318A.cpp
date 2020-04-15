#include<bits/stdc++.h>
#include<unordered_map>
typedef long long int ll;
 
#define pp pair<ll,ll>
#define MAXN 1000050
using namespace std;
 
 
int main(){
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}
 
