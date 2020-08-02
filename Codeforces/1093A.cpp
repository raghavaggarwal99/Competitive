#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
int solve(int a, int b){
    if(a>b)
    return a;
    return b;
 
}
int main()
{
    int q;
    cin>>q;
 
    for(int i=0; i<q; i++){
 
        long long int a;
        cin>>a;
 
        if(a%5==0){
            cout<<a/5<<endl;
        }        
 
        else{
            cout<<a/2<<endl;
        }
       
 
 
 
 
    }
 
 
}
