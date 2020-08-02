#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n,a1,a2,a3;
    long long int a=-8e18;
       long long int b=-8e18;
       long long int c=-8e18;
 
    cin>>n>>a1>>a2>>a3; 
    
    int x;
 
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a=max(a,a1*x);
        b=max(b,a+a2*x);
        c=max(c,b+a3*x);
    }
    cout<<c<<endl;
}
