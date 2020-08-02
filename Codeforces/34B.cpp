#include <bits/stdc++.h>
#include <iomanip> 
#include<iostream>
#include<unordered_map>
using namespace std;
 
int main()
{
   int n,m;
   cin>>n>>m;
 
   int *a=new int[n+1];
 
   for(int i=1; i<=n; i++){
       cin>>a[i];
      
   }
 
sort(a+1,a+n+1);
int sum=0;
int count=0;
for(int i=1; i<=n; i++){
    if(a[i]>0 || count>=m){
        break;
    }
 
    else{
        count++;
        sum+=a[i];
    }
 
}
 
cout<<abs(sum)<<endl;
 
 
 
}
