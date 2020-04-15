#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main() {
    int i, n, t, k, w;
    long long sum=0;
 
    cin>> k>>n>>w;
 
   
        sum = ((w)*(w+1))/2;
        sum*=k;
    
    if(sum<= n){
        cout <<0<<"\n";
    }
    else cout << sum - n << "\n";
 
    return 0;
}
