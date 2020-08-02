#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
  
  long long int n;
  cin>>n;
 
char *a=new char[n+1];
int *b=new int[n+1];
 
for(int i=1; i<=n; i++){
    cin>>a[i];
 
}
 
for(int i=1; i<=n; i++){
    b[i] = a[i] - 48;
}
 
 
vector<int> A;
 
for(int i=1; i<=n; i++){
 
    if(b[i]==0 || b[i]==1){
        continue;
    }
 
    else if(b[i]==4){
        A.push_back(2);
        A.push_back(2);
        A.push_back(3);
    }
 
    else if(b[i]==6){
        A.push_back(5);
        A.push_back(3);
    }
 
    else if(b[i]==8){
        A.push_back(2);
        A.push_back(2);
        A.push_back(2);
        A.push_back(7);
    }
    else if(b[i]==9){
        A.push_back(3);
        A.push_back(3);
        A.push_back(2);
        A.push_back(7);
    }
    else {
        A.push_back(b[i]);
    }
 
 
}
 
 
sort(A.begin(), A.end(),std::greater<int>());
 
for(int i=0; i<A.size(); i++){
    cout<<A[i];
}
 
 
 
}
 
