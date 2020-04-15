#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
int main()
{
    long long int n;
    cin>>n;
 
long long int left=0;
long long int right=0;
 
    int *a=new int[n+1];
     int *l=new int[n+1];
      int *r=new int[n+1];
 
for(int i=0; i<=n; i++){
    l[i]=0;
    r[i]=0;
}
 
    for(int i=1; i<=n; i++){
        cin>>a[i];
 
        if(a[i]==0){
            left++;
        }
        else{
            right++;
        }
 
        
    }
long long int ans=0;
    if(left>right){
 
        for(int i=n; i>0; i--){
            if(a[i]==0){
                l[i-1]=l[i]+1;
            }
            else{
                l[i-1]=l[i];
                ans+=l[i];
            }
        }
 
        cout<<ans<<endl;
        return 0;
 
    }
 
    else{
         for(int i=1; i<=n; i++){
 
            if(a[i]==1){
                l[i]=l[i-1]+1;
            }
            else{
                l[i]=l[i-1];
                ans+=l[i];
            }
        }
 
        cout<<ans<<endl;
        return 0;
    }
 
 
 
 
 
}
