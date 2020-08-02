
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int T, t;
    cin>>T;
    for(int w=0; w<T; w++){
        int n, k;
        cin>>n>>k;
        
     
        int *a=new int[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
       
        int count=0;
        int check=0;
        int ans=0;
        int i=0;
        
       while(i<n){
           if(a[i]==k){
               int v=a[i];
               int j=i;
               count=1;
               while(j<n){
                    if(a[j]!=v){
                       break;
                   }
                   if(a[j]==1 && count==k){
                       ans++;
                       break;
                   }
                   
                   j++;
                   v--;
                   count++;
               }
               i=j;
               
           }
           else{
               i++;
           }
       }

        cout<<"Case #"<<w+1<<": "<<ans<<endl;
    }

};
