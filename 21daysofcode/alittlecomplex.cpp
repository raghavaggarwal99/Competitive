#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    long long int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        
        long long int *a=new long long int[n];
        long long int *b=new long long int[n];
        
        for(int i=0; i<n; i++){
            cin>>a[i]>>b[i];
        }
        
        long long int x3=a[0];
        long long int y3=b[0];
        
        for(int i=1; i<n; i++){
            // cout<<x3<<" "<<y3<<endl;
            long long int v1=x3*a[i]-y3*b[i];
            long long int v2=x3*b[i]+y3*a[i];
            x3=v1;
            y3=v2;
        }
        
        cout<<x3<<" "<<y3<<endl;
        
        
        
        
    }
  
    return 0;
}

