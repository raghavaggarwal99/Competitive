#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    int *a=new int[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
 
    sort(a+1,a+n+1);
int i=1;
int j=n;
long long int sum=0;
    while(1){
 
        long long int v=a[i]+a[j];
        sum+=(v*v);
 
        i++;
        j--;
 
        if(j<=i){
            break;
        }
    }
 
    cout<<sum<<endl;
 
 
}
