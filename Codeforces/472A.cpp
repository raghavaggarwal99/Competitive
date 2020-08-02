#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
 
 
int main()
{
 
long long int n;
 
    cin>>n;
    
 
    if(n%2==0){
        long long int a=4;
        long long int b=n-4;
        if(a>b)
        cout<<b<<" "<<a<<endl;
        else
        cout<<a<<" "<<b<<endl;
        return 0;
    }
    if(n>=9){
        long long int a=9;
        long long int b=n-9;
        if(a>b)
        cout<<b<<" "<<a<<endl;
        else
        cout<<a<<" "<<b<<endl;
        return 0;
    }
 
 
 
       
    
}
