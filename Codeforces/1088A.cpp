#include<iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
 
int main()
{
    
    long long int x;
    cin>>x;
 
    if(x<=1){
        cout<<"-1"<<endl;
        return 0;
    }
 
    else if(x<=3){
 
        cout<<x<<" "<<x<<endl;
        return 0;
    }
    x=x/2;
 
    int a,b;
 
    long long int v=sqrt(x);
    //cout<<v<<endl;
    b=v+1;
    a=2*b;
 
 
cout<<a<<" "<<b<<endl;
 
    
}
