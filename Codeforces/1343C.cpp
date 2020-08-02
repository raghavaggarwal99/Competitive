#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    
    long long int t,n;
    cin>>t;
    
    // int *a=new int[n];
    // string ans="";
    
    for(int k=0; k<t; k++){
        cin>>n;
        
        int *a=new int[n];
      for(int i=0; i<n; i++){
          cin>>a[i];
      }
        
      int positive=INT_MIN;
        int negative=INT_MIN;
        
        int check1=0;
        int check2=0;
        int count=0;
        long long int sum=0;
        
       for(int i=0; i<n-1; i++){
          if(a[i]>0){
              if(a[i]>positive){
                  positive=a[i];
              }
              check1=1;
              check2=0;
              negative=INT_MIN;
          }
          else{
              if(a[i]>negative){
                  negative=a[i];
              }
              check1=0;
              check2=1;
              positive=INT_MIN;
          } 
           
           if(check1==1){
               if(a[i+1]<0){
                   // cout<<positive<<endl;
                   count+=1;
                   sum+=positive;
               }
           }
           else if(check2=1){
               if(a[i+1]>0){
                   // cout<<negative<<endl;
                   count+=1;
                   sum+=negative;
               }
           }
           
           
      }  
        
        if(a[n-1]<0){
            
            // cout<<positive<<endl;
            // cout<<negative<<endl;
            
            if(positive!=INT_MIN){
                // cout<<a[n-1]<<endl;
                sum+=a[n-1];
            }
            else{
                int v=max(a[n-1],negative);
                // cout<<v<<endl;
                sum+=v;
            }    
        }
        else{
            // cout<<"srvg"<<endl;
            // cout<<positive<<endl;
            // cout<<negative<<endl;
             if(negative!=INT_MIN){
                // cout<<a[n-1]<<endl;
                sum+=a[n-1];
            }
            else{
                int v=max(a[n-1],positive);
                // cout<<v<<endl;
                sum+=v;
            }           
        }
        
        cout<<sum<<endl;
        
        
        
    }

}

