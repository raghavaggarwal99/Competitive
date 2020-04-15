#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
int main()
{
   long long int n;
   cin>>n;
 
 
long long int sum=0;
 
long long int c=10;
int digits=1;
 
while(1){
 
    if(n==c){
 
        sum+=(n-(c/10))*digits;
        sum+=digits+1;
        break;
 
    }
 
 
    if(n<c){
        sum+=(n-(c/10)+1)*digits;
        break;
    }
    
 
    sum+=(c-(c/10))*digits;
 
    c*=10;
    digits++;
 
 
 
}
 
 
 
 
cout<<sum<<endl;
 
 
}
