#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
    
    long long int n,m;
    cin>>n>>m;
 
    int *a=new int[n];
    int *b=new int[n];
 
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
 
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
 
    if(a[0]==0){
        cout<<"NO"<<endl;
        return 0;
    }
 
 
    if(a[0]==1 && a[m-1]==1){
        cout<<"YES"<<endl;
        return 0;
    }
 
    for(int i=m; i<n; i++){
 
        if(a[i]==1){
 
            if(b[i]==1 && b[m-1]==1){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
 
 
 
cout<<"NO"<<endl;
 
}
