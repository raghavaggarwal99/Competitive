#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    
   long long int t,n,k,m;
    cin>>t;
    
 
    for(int i=0;i<t;i++){
        cin>>n>>k;
        
    int *a=new int[n];
        int *b=new int[n];
        
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        for(int j=0; j<n; j++){
            cin>>b[j];
        }
        
        sort(a,a+n);
        sort(b,b+n);
        
        int moves=0;
        int start=0;
        
        while(moves<=k){
            if(start>=n || moves==k){
                break;
            }
            if(a[start]<b[n-1-start]){
                a[start]=b[n-1-start];
                start++;
                moves++;
            }
            else{
                break;
            }
        }
        long long int sum=0;
        
         for(int j=0; j<n; j++){
             sum+=a[j];
        }
        // cout<<endl;
        cout<<sum<<endl;
        
        
    }
   
 
}
