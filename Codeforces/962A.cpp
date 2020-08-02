#include<bits/stdc++.h>
#include <iostream> 
#include <algorithm> 
using namespace std;
 
long long int p; 
long long int q;
long long int b;
 
 
int main()
{
   long long int n;
    cin>>n;
   
   int *a=new int[n];
   double sum=0;
     double sum2=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    //cout<<sum/2<<endl;
     for(int i=0; i<n; i++){
         sum2+=a[i];
         if(sum2>=(sum/2)){
             cout<<i+1<<endl;
             break;
         }
     }
    
}
