#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 

int main(){
  
   int n,l;
    cin>>n>>l;
    
 
    double *a=new double[n];
    
   for(int i=0; i<n; i++){
        cin>>a[i];
   }
    sort(a,a+n);
    
    double ans=a[0]-0.0;
    
   
    for(int i=1; i<n; i++){
        
        double c=(a[i]-a[i-1])/2.0;
        if(c>ans){
            ans=c;
        }
        
    }
    
    double c=(l-a[n-1]);
        if(c>ans){
            ans=c;
        }
    
   cout.precision(20);
    cout<<fixed << ans<<endl;
    
    
}
