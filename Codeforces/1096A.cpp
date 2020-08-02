#include<bits/stdc++.h>
using namespace std;
int max(int a, int b){
    if(a>b)
    return a;
    else
    return b;
}
 
int main()
{
    
    long long int t,a,b;
    cin>>t;
 
    for(int i=0; i<t; i++){
        cin>>a>>b;
 
        if(2*a<=b){
            cout<<a<<" "<<2*a<<endl;
        }
    }
    
}
 
