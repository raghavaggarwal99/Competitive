#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
 
int main()
{
  
    long long int a,b,c,t;
    cin>>t;
 
for(int i=0; i<t; i++){
 
cin>>a>>b>>c;
 
long long int k= c/2;
long long int j=k;
 
if(c%2!=0){
j++;
}
 
cout<<(j*a)-(k*b)<<endl;
 
 
 
}
 
 
}

