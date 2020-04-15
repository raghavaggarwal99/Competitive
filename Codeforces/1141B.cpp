#include <bits/stdc++.h>
using namespace std;
int min(int a, int b){
 
    if(a>b)
    return a;
    return b;
}
 
 
int main()
{
   
   long long int n;
   cin>>n;
 
   int *a=new int[n+1];
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
 
if(n==1){
    if(a[0]==0){
        cout<<"0"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
    return 0;
}
 
 
   int count=0;
int max=0;
 
   for(int i=0; i<n; i++){
       if(a[i]==1){
           count++;
           if(count>max){
               max=count;
           }
       }
       else if(a[i]==0){
           count=0;
       }
   }
 
int first=0;
int index=0;
 
   for(int i=0; i<n; i++){
       if(a[i]==1){
           index=i;
        first++;
       }
       else{
           break;
       }
   }
 
if(index!=n-1){
    for(int i=n-1; i>=0; i--){
        if(a[i]==1){
          // index=i;
            first++;
       }
       else{
           break;
       }
    }
}
 
cout<<min(max,first)<<endl;
  
}
