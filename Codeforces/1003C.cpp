#include<bits/stdc++.h>
#include<unordered_map>
#include <iomanip>
using namespace std;
 
int main()
{
   long long int n,k;
   cin>>n>>k;
 
        double *a=new double[n+1];
    double *sum=new double[n+1];
a[0]=0;
sum[0]=0;
 
    for(int i=1; i<=n; i++){
       cin>>a[i];
 
        sum[i]=sum[i-1]+a[i];
 
    }
 
   double max=0;
 
for(int j=k; j<=n; j++){
 
   for(int i=j; i<=n; i++){
 
        double average=(sum[i]-sum[i-j])/j;
 
        if(average>max){
            max=average;
        } 
   }
}
 
  cout << std::setprecision(16) << max << '\n';
 
    
 
 
 
 
 
}
