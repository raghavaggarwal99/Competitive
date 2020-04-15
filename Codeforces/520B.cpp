#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
    else
    return b;
}
 
int main()
{
 
    long long int n,m;
    cin>>n>>m;
 
    if(m<=n){
        cout<<n-m<<endl;
        return 0;
    }
long long int count=0;
 
    
 
        while(1){
            if(m<=n){
                break;
            }
 
            if(m%2!=0){
                m++;
                count++;
            }
 
        m=m/2;
        count++;
        }
 
        cout<<count+n-m<<endl;
 
    
    
 
}
 
