#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    

    long long int n,k,c,m,n1,n2;
    
    string str;
    cin>>str;
    
    cin>>k;
    
    int *a=new int[26];
    long long int max=0;
    unordered_map<char,int> x;
    
    for(int i=0; i<26; i++){
        cin>>a[i];
        x['a'+i]=a[i];
        if(a[i]>max){
            max=a[i];
            n=i;
        }
    }
    // char x='a'+n;
    
    vector<int> v;
    
    for(int i=0; i<str.length(); i++){
        v.push_back(x[str[i]]);
    }
    
    for(int i=0; i<k; i++){
        v.push_back(max);
    }
    
    
    // sort(v.begin(), v.end());
    long long int sum=0;
    
     for(int i=0; i<v.size(); i++){
        sum+=((i+1)*v[i]);
    }
    
    cout<<sum<<endl;
    
    
    
    
    
     
    
    return 0;
}

