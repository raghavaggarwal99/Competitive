#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
 
 long long int n,k;
 cin>>n>>k;
int c=0;
 
for(int i=k-1; i>=0; i--){
    if(n%i==0){
        c=i;
        break;
    }
}
 
n=n/c;
 
cout<<k*n+c<<endl;
 
 
}
