#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n;
    cin>>n;
 
    int *a=new int[n+1];
 
unordered_map<long long int,long long int> x;
 
 
    for(int i=0; i<n; i++){
        cin>>a[i];
        x[a[i]]++;
    }
 
    long long int sum=0;
 
    sum+=(x[0]*(x[0]-1))/2;
 
   for(int i=1; i<=10; i++){
       
       long long int q=x[i];
       long long int w=x[-i];
 
       sum+=q*w;
   }
 
   cout<<sum<<endl;
 
 
 
 
 
}
