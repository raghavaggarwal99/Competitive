#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
 
int main()
{
  
    long long int n,m;
    cin>>n>>m;
 
unordered_map<int,int> x;
 
 
    int *a=new int[n]; 
    for(int i=0; i<n; i++){
        cin>>a[i];
        x[a[i]]++;
    }
 
long long int sum=0;
 
    sort(a,a+n);
 
int p=0;
 
for(int i=0; i<m; i++){
 
if(i==0){
    cout<<a[p]<<endl;
    p+=x[a[p]];
    continue;
}
 
        if(p<n){
        cout<<a[p]-a[p-1]<<endl;
        
        p+=x[a[p]];
        }
        else{
            cout<<"0"<<endl;
        }
 
}
   
 
 
}
