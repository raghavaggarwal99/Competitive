#include<iostream>
#include<algorithm>
 
 
using namespace std;
 
int max(int a, int b){
    
    if(a>b){
        return a;
    }
    return b;
    
}
 
 
int main(){
    
 long long int n,k;
 cin>>n>>k;
 
 int *a=new int[n];
 
 for(long long int i=0; i<n; i++){
     cin>>a[i];
     
 }
 
 sort(a,a+n);
 
 if(k==a[n/2]){
     cout<<"0"<<endl;
     return 0;
 }
 
 
 long long int sum=0;
 
 
for(int i=0; i<n; i++){
    
    if(i<(n/2)){
        sum+=max(a[i]-k,0);
    }
    if(i==(n/2)){
        sum+=abs(a[i]-k);
    }
    if(i>(n/2)){
        sum+=max(0,k-a[i]);
    }
    
    
    
}
 
 
 cout<<sum<<endl;
 
    
}
