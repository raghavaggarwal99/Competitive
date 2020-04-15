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
        cin>>n>>k;
      
        
        long long int a=n/k;
        long long int rem=n%k;
        long long int max=k/2;
        
        if(rem>max){
            c=max;
        }
        else{
            c=rem;
        }
        
        cout<<c+a*k<<endl;
        
        
        
    }
    
    
    
    return 0;
}

