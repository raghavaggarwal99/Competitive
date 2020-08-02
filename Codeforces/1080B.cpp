#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main() {
  int n;
  cin >> n;
 
long long int a,b,num, num2;
 
for(int i=0; i<n; i++){
 
cin>>a>>b;
 
if(a==b){
    if(a%2==0){
        cout<<a<<endl;
    }
    else{
        cout<<-a<<endl;
    }
    continue;
}
 
 
if(a%2==0){
 
    long long int first= a;
        num=(b-a)/2 +1;
    long long int sum= (((2*first + (num-1)*2))*num)/2;
    long long int second= -(a+1);
 
    if(b%2==0){
        num2=(b-a)/2;
    }
    else if(b%2!=0){
        num2= (b-a)/2 +1;
    }
    long long int sum2= (((2*second + (num2-1)*(-2)))*num2)/2;
    cout<<sum2+sum<<endl;
 
 
}
else{
 
long long int first= (-a);
        num=(b-a)/2 +1;
    long long int sum= (((2*first + (num-1)*(-2)))*num)/2;
    long long int second= (a+1);
 
    if(b%2!=0){
        num2=(b-a)/2;
    }
    else if(b%2==0){
        num2= (b-a)/2 +1;
    }
    long long int sum2= (((2*second + (num2-1)*2))*num2)/2;
    cout<<sum2+sum<<endl;
 
 
 
 
 
}
 
}
 
 
}
