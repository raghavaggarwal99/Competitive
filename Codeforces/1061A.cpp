#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long int n,m;
  cin >> n>>m;
 
long long int sum=m/n;
long long int a=m%n;
 
if(a==0){
    cout<<sum<<endl;
 
}
else{
    cout<<sum+1<<endl;
}
 
 
}
