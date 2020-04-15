#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
 
    
 
 
    long long int n,m,k;
    
    cin>>n>>m>>k;
 
long long int count=0;
 
    if(n%k==0){
        count=n/k;
    }
 
    else if(n%k!=0){
        count=n/k;
        count++;
    }
 
    m=m-k;
 
if(m<=0){
    cout<<count<<endl;
    return 0;
}
 
long long count2=0;
 
 
    if(m%k==0 && m!=0){
        count2=m/k;
    }
 
    else if(m%k!=0){
        count2=m/k;
        count2++;
    }
 
    
    cout<<count+count2*count<<endl;
 
}
 
