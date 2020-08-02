#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
int *a=new int[n+1];
vector<int> v;
unordered_map<int,int> x;
 
for(int i=0; i<n; i++){
    cin>>a[i];
    if(x[a[i]]==0){
        v.push_back(a[i]);
        x[a[i]]=1;
    }
}
 
if(v.size()<=1){
    cout<<"NO"<<endl;
    return 0;
}
 
sort(v.begin(), v.end());
 
cout<<v[1]<<endl;
 
}

