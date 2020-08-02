#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
 
using namespace std;
int main(){
 
int n;
cin>>n;
 
//cout<<n<<endl;
 
int v=0;
int q=0;
 
 
int *a=new int[n];
 
for(int i=0; i<n/2; i++){
    cin>>a[i];
    
    if(a[i]%2==0){
        q=1;
    }
    else{
        v=1;
    }
    
}
int ans1=0;
int ans2=0;
 
if(q==0 || v==0){
    cout<<0<<endl;
    return 0;
}
 
else{
    
    
    
    
        sort(a,a+n/2);
        //cout<<a[0]<<endl;
        for(int i=0; i<n/2; i++){
            
            ans1+=abs(a[i]-(2*i+1));
            ans2+=abs(a[i]-(2*i+2));
           // cout<<ans1<<endl;
            //cout<<ans2<<endl;
        }
        
        
    cout<<min(ans1,ans2)<<endl;
    
    
    
    
    
}
 
 
}
