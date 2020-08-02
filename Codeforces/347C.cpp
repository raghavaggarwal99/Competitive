#include <bits/stdc++.h>
#include <iostream>
#include<unordered_map>
using namespace std;
 
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main () {
    
   long long int n,k;
   cin>>n;
 
   int *a=new int[n];
unordered_map<int,int> x;
int o=0;
 
long long int count=0;
long long int max=0;
 
   for(int i=0; i<n; i++){
       cin>>a[i];
 
        if(x[i]==1){
            o=1;
        }
 
       if(x[i]==0){
       count++;
       x[i]=1;
       }
       
       if(a[i]>max){
           max=a[i];
       }
   }
 
if(n==1){
    cout<<"Alice"<<endl;
    return 0;
}
sort(a,a+n);
 
k=a[0];
 
for(int i=1; i<n; i++){
    k= gcd(a[i],k);
}
 
 
long long int h= (a[n-1])/k -n;
 
 
 
if(h%2==0){
    cout<<"Bob"<<endl;
}
else{
    cout<<"Alice"<<endl;
}
 
 
 
}
 
