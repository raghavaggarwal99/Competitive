#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int t;
    cin>>t;
    int n;
    
    for(int i=0; i<t; i++){
        cin>>n;
        int *a=new int[n];
        int *b=new int[n];
        
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        for(int j=0; j<n; j++){
            cin>>b[j];
        }
        
        
        sort(a, a+n);
        sort(b,b+n);
        
        
        for(int j=0; j<n; j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
        for(int j=0; j<n; j++){
             cout<<b[j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}

