#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long int n, m;
  cin >> n >> m;
  
if(m%n!=0){
    cout<<"NO"<<endl;
    return 0;
}
 
long long int copy=n;
long long int count=0;
    while(1){
        
if(n>m){
cout<<"NO"<<endl;
    return 0;
}
 
        if(m==n){
                cout<<"YES"<<endl;
                cout<<count<<endl;
            return 0;
        }
        
n=copy*n;
count++;
 
 
    }
}
