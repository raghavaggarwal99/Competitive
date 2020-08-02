#include <bits/stdc++.h>
#include <iostream>
#include<unordered_map>
using namespace std;
 
 
 
int main () {
    
   long long int n,m,k,a,b;
  cin>>a>>b;
 
long long int sum=0;
 
if(a==1 && b==1){
    cout<<sum<<endl;
    return 0;
}
 
 
long long int ret=b*(b-1)/2%1000000007;
    ret*=(a+a*(a+1)/2%1000000007*b)%1000000007;
    cout << ret%1000000007 << endl;
 
 
 
}
 
