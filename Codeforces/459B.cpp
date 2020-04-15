#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main()
{
    long long int n;
    cin>>n;
 
    int *a=new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
 
    }
 
    sort(a,a+n);
 
long long int count1=0;
long long int count2=0;
 
for(int i=0; i<n; i++){
       
       if(a[i]==a[0]){
           count1++;
       }
       else if(a[i]==a[n-1]){
           count2++;
       }
 
    }
 
if(a[n-1]==a[0]){
 
cout<<"0"<<" "<<(n*(n-1))/2<<endl;
return 0;
 
}
    cout<<a[n-1]-a[0]<<" "<<count1*count2<<endl;
   
    
}
