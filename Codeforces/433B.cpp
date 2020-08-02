#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 


int main(){
  
  long long int n;
    cin>>n;
    
    
    long long int *a=new long long int[n+1];
    long long int *sum=new long long int[n+2];
    long long int *cheap=new long long int[n+2];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i==0){
            sum[i+1]=a[i];
        }
        else{
           sum[i+1]=a[i] +sum[i];
        }
    }
    
//     for(int i=1; i<=n; i++){
//          cout<<sum[i]<<" ";
//     }
//     cout<<endl;
    
    
    
   sort(a,a+n);
   cheap[0]=0;
   sum[0]=0;
    cheap[1]=a[0];
    
    for(int i=1; i<n; i++){
         cheap[i+1]=a[i] +cheap[i]; 
    }
    
    //  for(int i=0; i<=n; i++){
    //      cout<<cheap[i]<<" ";
    // }
    // cout<<endl;
    
    int k;
    cin>>k;
   
    
   for(int i=0; i<k; i++){
       int check,l,r;
       cin>>check>>l>>r;
       
       if(check==1){
           cout<<sum[r]-sum[l-1]<<endl;
       }
       else{
           cout<<cheap[r]-cheap[l-1]<<endl;
       }
       
       
   }
    
    
}
    

