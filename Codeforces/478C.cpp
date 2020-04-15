#include<stdio.h>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int min(int a, int b){
    if(a>b)
    return b;
    return a;
}
 
int main()
{
 
    long long int a[3];
 
   cin>>a[0]>>a[1]>>a[2];
 
    sort(a,a+3);
 
    long long int result = (a[0]+ a[1] + a[2]) / 3;
    
    if(a[0] + a[1] < result)
        result = a[0] + a[1];
 
    cout << result<<endl;
 
    return 0;
 
 
}
 
