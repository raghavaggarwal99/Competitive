#include<bits/stdc++.h>
#include<iostream>
#include <iomanip> 
#include<math.h>
using namespace std;
double min(double a, double b){
    if(a>b)
    return b;
    else
    return a;
}
 
 
int main()
{
    long long int n;
    
    cin>>n;
 
int count=0;
double x;
double sum=0;
 
      for(int i =1;i<=2*n;i++)
    {    
         cin>>x;
         if(floor(x)==x){
             count++;
         }
        
         else{
              sum+=x-floor(x);
         }
      
    }
 
 
if(count ==2*n){
    cout<<"0.000"<<endl;
    return 0;
}
 
double ans=INT_MAX;
int k=min(n,count);
 
for(int i=0; i<=k; i++){
    ans=min(ans, fabs(n-i-sum));
}
 
 
 
  printf("%.3f\n",abs(ans));
 
 
}
