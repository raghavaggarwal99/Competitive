#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
int main()
{
   long long int n;
   cin>>n;
 
long long int *a=new long long int[n];
 
long long int sum=0;
 
for(int i=0; i<n; i++){
    cin>>a[i];
}
 
sort(a,a+n);
 
for(int i=0; i<n; i++){
 
    sum+=abs((i+1)-a[i]);
 
 
}
 
cout<<sum<<endl;
 
 
}
