#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
 
if(m==0){
    cout<<"1"<<endl;
    return 0;
}
    long long int x=n/2;
 
    if(m<=x){
        cout<<m<<endl;
        return 0;
    }
    else{
 
        if(n%2!=0){
            if(m==x+1){
                cout<<n-m<<endl;
                return 0;
            }
            else{
                int v=n/2+1;
                m-=v;
              cout << n - m-v << endl;
              return 0;
            }
        }
        else{
            int v=n/2;
            m-=v;
            cout<<n-m-v<<endl;
            return 0;
        
        }
 
    }
 
 
 
 
 
}
