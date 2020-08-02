#include <bits/stdc++.h>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;
int min(int a, int b){
 
    if(a>b)
    return b;
    return a;
}
int max(int a, int b){
 
    if(a>b)
    return a;
    return b;
}
 
 
int main(){
 
    int n;
    cin>>n;
 
int *a=new int[n+1];
int *b=new int[n+1];
 
    for(int i = 0;i<n;i++){
        int k;
        cin>>k;
 
        a[i] = k;
        int tm = 0;
        while(k--){
            int t;
            cin>>t;
            tm = max(tm,t);
        }
        b[i] = tm; 
    }
    long long int mm=0;
    long long int ans=0;
 
    for(int i = 0;i<n;i++)
        mm = max(mm,b[i]);
 
    for(int i = 0;i<n;i++){
        ans += (mm-b[i])*a[i];
    }
    
    cout<<ans<<endl;
    return 0; 
} 
 
