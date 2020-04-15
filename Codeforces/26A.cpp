#include <bits/stdc++.h>
#include<iostream>
#include<unordered_map>
using namespace std;
 
int ans[3001];
 
bool check(int n){
int count=0;
    for(int i=2; i<=n; i++){
 
        if(n%i==0){
            count++;
        }
 
        while(n%i==0){
            n=n/i;
        }
 
    }
    if(count==2){
        return true;
    }
    return false;
}
 
void init(int n){
 
for(int i=1; i<=3000; i++){
 
    if(check(i)==true){
        ans[i]=1;
    }
    else{
        ans[i]=0;
    }
}
 
}
 
int main()
{
   init(3000);
   
 int n;
 cin>>n;
int sum=0;
 
 for(int i=1; i<=n; i++){
 
sum+=ans[i];
 }
 
 cout<<sum<<endl;
 
}
