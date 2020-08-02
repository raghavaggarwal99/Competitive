#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    long n,m,d;
    cin>>n>>m;
    int *a=new int[n];
    int *b=new int[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    if(n==1 && m==1){
        cout<<1<<endl;
        return 0;
    }
 
    
    long sum=a[0];
    long j=b[0];
    long count=0;
    int k=1;
    
    int i=1;
    
    while(1){
   
            //cout<<sum<<endl;
            //cout<<j<<endl;
            if(sum<j){
                sum+=a[i];
                i++;
            }
            else if(sum>j){
                j+=b[k];
                k++;
            }
            else if(sum==j){
                j=b[k];
                k++;
                sum=a[i];
                i++;
                count++;
            }
    if(i==n && k==m)
       break;
        
        
    }
    
    cout<<count+1<<endl;
    
}
