#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main() {
  int n,m;
  cin >> n>>m;
 
int red=n*2;
int green=n*5;
int blue= n*8;
 
int sum=0;
sum=(red/m) + (green/m) + (blue/m);
if(red%m!=0){
sum+=1;
}
if(green%m!=0){
sum+=1;
}
if(blue%m!=0){
sum+=1;
}
 
cout<<sum<<endl;
 
}
 
