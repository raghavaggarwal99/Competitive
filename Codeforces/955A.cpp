#include<iostream>
#include<bits/stdc++.h>
#include<queue>
 
using namespace std;
int min(int a,int b){
    
    if(a<b)
        return a;
    return b;
    
}
 
int main(){
   
  long hh,mm,sum;
    cin>>hh>>mm;
    
   long h,d,c,n;
    cin>>h>>d>>c>>n;
    long v=h/n;
    if(h%n!=0)
        v+=1;
    
    
   if(hh>=20){
       cout<<(c*v*0.8)<<endl;
       return 0;
 
   } 
    
   if(hh<20){ 
   sum=(19-hh)*60 + (60-mm);
    }
    //cout<<sum<<endl;
    
   long copyh=h;
    copyh+=sum*d;
    
   long b=copyh/n;
    if(copyh%n!=0)
        b+=1;
    
    cout<<min((b*c*0.8),v*c)<<endl;
    
}
