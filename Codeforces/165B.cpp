#include <iostream>
#include <cstdio>
using namespace std;
 
int main() {
    long long int n, k, tmp, n2, i;
    cin>>n>>k;
 
    tmp=n-n/k;
    n2=n;
 
    while(n2>0) {
        n2=n, i=tmp;
        while(i>0) n2-=i, i/=k;
        if(n2>0) tmp++;
    }
    
    cout<<tmp<<endl;
    return 0;
}
