#include<iostream>
#include<bits/stdc++.h>
#include <iomanip> 
using namespace std;
 
int main()
{
 
    int n;
    cin>>n;
 
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
 
    long long int sum=a+b+c+d;
int count=1;
    for(int i=1; i<n; i++){
        cin>>a>>b>>c>>d;
 
        if((a+b+c+d)>sum){
            count++;
        }
    }
 
    cout<<count<<endl;
 
}
