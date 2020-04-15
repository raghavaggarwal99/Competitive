#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
long long int min(long long int a, long long int b){
    if(a<b)
    return a;
 
    return b;
}
 
int main()
{
  
  long long int n,m,z,k;
  cin>>k>>n;
 
vector<vector<int>> v(100000);
int max=0;
 
    for(int i=0; i<n; i++){
       int a,b;
        cin>>a>>b;
       v[a].push_back(b);
       
       if(a>max)
       max=a;
 
    }
 
    for(int i=1; i<=max; i++){
        
        if(v[i].size()>0 && k<=i){
           
            cout<<"NO"<<endl;
            return 0;
        }
 
 
       if(v[i].size()>0 && k>i){
          
            sort(v[i].begin(), v[i].end());
 
            for(int j=0; j<v[i].size(); j++){
                k+=v[i][j];
                
            }
        }
 
    }
 
 
 
cout<<"YES"<<endl;
 
}
