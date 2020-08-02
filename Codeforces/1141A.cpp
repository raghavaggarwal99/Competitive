#include <bits/stdc++.h>
using namespace std;
int min(int a, int b){
 
    if(a<b)
    return a;
    return b;
}
 
 
int main()
{
   
   long long int a,b;
   cin>>a>>b;
 
   if(b%a!=0 || b<a){
       cout<<"-1"<<endl;
       return 0;
   }
   if(b==a){
       cout<<"0"<<endl;
       return 0;
   }
 
   long long int c=b/a;
 
long long int count=0;
long long int count1=0;
long long int d=c;
 
   while(1){
       if(c%2!=0){
           break;
       }
       c=c/2;
       count++;
   }
   while(1){
       if(c%3!=0){
           break;
       }
       c=c/3;
       count++;
   }
 
while(1){
       if(d%3!=0){
           break;
       }
       d=d/3;
       count1++;
   }
   while(1){
       if(d%2!=0){
           break;
       }
       d=d/2;
       count1++;
   }
 
   if(c==1 && d==1){
       cout<<min(count,count1)<<endl;
       return 0;
   }
   else if(c==1 && d!=1){
       cout<<count<<endl;
       return 0;
 
   }
    else if(c!=1 && d==1){
       cout<<count1<<endl;
       return 0;
       
   }
   else if(c!=1 && d!=1){
       cout<<"-1"<<endl;
       return 0;
   }
 
  
}
