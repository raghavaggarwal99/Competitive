#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 


int main(){
  
  long long int n;
    cin>>n;
    
 
   int *a=new int[n];
 
    for(int k=0; k<n; k++){
        cin>>a[k];
    }
        
    sort(a,a+n);
    
    long long int count=0;
    
    for(int i=1; i<n; i++){
       if(a[i]>a[i-1]){
           continue;
       }
        else if(a[i]==a[i-1]){
            count+=1;
            a[i]+=1;
        }
        else{
            int d=abs(a[i]-a[i-1]);
            a[i]=a[i]+1+d;
            count=count+d+1;
            
        }
        
    }
    
    //  for(int k=0; k<n; k++){
    //     cout<<a[k]<<" ";
    // }
    cout<<count<<endl;
    
}
    

