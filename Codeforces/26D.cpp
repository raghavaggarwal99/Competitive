#include <bits/stdc++.h>
#include <iomanip> 
#include<iostream>
using namespace std;
 
int main()
{
    double n,m,k;
    cin>>n>>m>>k;
 
    double ans=1.0;
 
    if((n+k)<m){
        cout<<"0"<<endl;
        return 0;
    }
 
    for(int i=0; i<=k; i++){
        ans=ans*((m-i)/(n+i+1));
    }
 
    double v=1-ans;
    std::cout << std::setprecision(5) << v << '\n';
 
 
}
