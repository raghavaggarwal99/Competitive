#include<bits/stdc++.h>
#include<unordered_map>
typedef long long int ll;
 
#define pp pair<ll,ll>
using namespace std;
 
 
 
int main() {
    int n;
    cin >> n;
 
int *a=new int[n+1];
double sum=0;
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    double av = (sum / n) * 2;
    for (int i = 1; i <= n; i++) {
        if (a[i] != 0) {
            for (int j = 1; j <= n; j++) {
                if (a[i] + a[j] == av && i != j) {
                    cout << i << " " << j << endl;
                    a[i] = 0;
                    a[j] = 0;
                }
            }
        }
    }
}
