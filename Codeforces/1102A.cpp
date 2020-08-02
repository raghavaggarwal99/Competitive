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
  
    long long int n;
    cin>>n;
 
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
 
 
    if(n%2==0){
 
        long long int v=n/2;
        if(v%2==0){
            cout<<"0"<<endl;
            return 0;
        }
        else{
            cout<<"1"<<endl;
            return 0;
        }
 
 
    }
    else{
        n--;
 
        long long int v=n/2;
 
        if(v%2==0){
            cout<<"1"<<endl;
            return 0;
        }
        else{
            cout<<"0"<<endl;
            return 0;
        }
    }
 
 
 
}
