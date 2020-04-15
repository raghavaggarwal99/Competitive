#include <bits/stdc++.h>
#include <iostream>
#include<unordered_map>
using namespace std;
 
int min(int a,int b){
    if(a>b)
    return b;
    else
    return a;
}
 
int main () {
    
   long long int n,m,k,index1, index2,l,j;
  
unordered_map<int,int> x;
 
long long int ans=0;
int* a =new int[7];
int* b =new int[2];
 
        for(int i=1; i<=6; i++){
            cin>>a[i];
            x[a[i]]++;
           
        }
m=0;
n=0;
        for(int i=1; i<=6; i++){
 
            if(x[a[i]]==6){
                 cout<<"Elephant"<<endl;
                 return 0;
            }
            if(x[a[i]]==5){
                 cout<<"Bear"<<endl;
                 return 0;
            }
 
            if(x[a[i]]==4){
                n=1;
            }
 
            else if(x[a[i]]==1 || x[a[i]]==2){
                b[m]=a[i];
                m++;
            }
        }
 
//cout<<b[0]<<" "<<b[1]<<endl;
 
if(n!=1){
    cout<<"Alien"<<endl;
    return 0;
}
 
if(b[0]==b[1]){
    cout<<"Elephant"<<endl;
}    
else{
    cout<<"Bear"<<endl;
}
}
