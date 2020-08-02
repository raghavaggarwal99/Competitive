#include <bits/stdc++.h>
#include<unordered_map>
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
 
unordered_map<int,int> ans;
 
   int *a=new int[n+1];
   for(int i=1; i<=n-1; i++){
       cin>>a[i];
   }
 
   int *b=new int[n+1];
   for(int i=0; i<n; i++){
       b[i]=0;
   }
 
long long int max=0;
 
   for(int i=1; i<n; i++){
       b[i]=b[i-1]+a[i];
       if(b[i]>max){
           max=b[i];
       }
   }
 
 
 
   long long int x=n-max;
if(x<=0 || x>n){
    cout<<"-1"<<endl;
    return 0;
}
 
   for(int i=0; i<n; i++){
       b[i]+=x;
   }
 
 
 for(int i=0; i<n; i++){
       if(b[i]<=0 || b[i]>n){
           cout<<"-1"<<endl;
           return 0;
       }
      
       if(ans[b[i]]==0){
           ans[b[i]]=1;
       }
       else if(ans[b[i]]==1){
           cout<<"-1"<<endl;
           return 0;
       }
   }
  
 
    for(int i=0; i<n; i++){
       cout<<b[i]<<" ";
   }
 
  
}
