#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
 
    
    long long int i,j,k;
    long long int n,sum;
 
    cin>>n>>k;
 
    set<long long int> v;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.insert(i);
            v.insert(n/i);
        }
    }
 
    if(v.size()<k)
        cout<<"-1";
 
    else
    {
        set<long long int>:: iterator p=v.begin();
        j=1;
 
        while(1)
        {
            if(j==k)
            {
                cout<<*p;
                break;
            }p++;j++;
        }
 
    }
 
    return 0;
 
    
    
 
}
