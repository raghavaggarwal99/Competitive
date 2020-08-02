#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
   long long int n,m,k;
   cin>>n>>m>>k;
 
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end(), greater<pair<int,int>>());
 
    long long int sum=0;
vector<int> index;
 
    for(int i=0; i<m*k; i++){
        sum+=a[i].first;
        index.push_back(a[i].second);
    }
 
sort(index.begin(),index.end());
    cout<<sum<<endl;
int p=0;
 
for(int i=0; i<k-1; i++){
    cout<<index[(i+1)*m-1]+1<<" ";
}
 
 
}
