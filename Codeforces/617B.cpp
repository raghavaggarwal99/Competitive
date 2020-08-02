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
 
    long long int n;
    cin>>n;
 
int *a=new int[n+1];
 
for(int i=0; i<n; i++){
   cin>>a[i];
}
 
long long int count=0;
long long int ans=0;
long long int j=0;
 
for(int i=0; i<n; i++){
 
    if(a[i]==1){
        count++;
    
        if(count==1){
            ans=1;
        }
        else{
            ans*=(i-j);
        }
        j=i;
    }
}
cout<<ans<<endl;
 
 
 
 
 
 
 
} 
