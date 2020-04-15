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
    long long int n,k,c;
    
    for(int i=0; i<t; i++){
        cin>>n;
      
        
       int *a=new int[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        
        sort(a, a+n, greater<int>()); 
        
         for(int j=0; j<n; j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
        
    }
    
    
    
    return 0;
}

