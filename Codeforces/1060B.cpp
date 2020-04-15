//1060B
 
 
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int count(long long int n){
    
    int count=0;
 
    while(n!=0){
        int rem=n%10;
        n=n/10;
        
        count++;
    }
    
    return count;
}
 
int sum1(long long int n){
    
    int sum=0;
 
    while(n!=0){
        int rem=n%10;
        n=n/10;
        sum+=rem;
    // cout<<rem<<endl;    
    }
   
    return sum;
}
 
 
 
 
int main()
{
   long long int n;
   cin>>n;
   int q=0;
   
   if(n<10){
       cout<<n<<endl;
       return 0;
   }
 
   int c=count(n);
  //cout<<c<<endl;
   long long int a=0;
   
   long long int v=pow(10,c-2);
   long long int sum=0;
   
   
 //cout<<sum<<endl;
 while(v!=0){
     
     a+=9*v;
     v=v/10;
    //cout<<a<<endl;
     
 }  
 long long int g;
 g=a;
 
 int x=1;
 
 while(1){
     
     a+=x*pow(10,c-1);
    // cout<<a<<endl;
     x++;
     if((n-a)<0){
         a=g;
         x--;
         break;
     }
     else{
         g=a;
     }
     
     //cout<<a<<endl;
     
 }
 
//cout<<x<<endl;   
 
   
  long long int b=n-a;
  sum+=sum1(b);
   
  // cout<<a<<" " <<b<<endl;
  cout<<sum+sum1(a)<<endl; 
  
   
}
