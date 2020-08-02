#include<iostream>
#include<bits/stdc++.h>
#include<queue>
 
using namespace std;
 
int main(){
   
string str;
    cin>>str;
    
   if(str[0]==str[4] && str[1]==str[3]){
       cout<<0<<endl;
       return 0;
   }
    int *a=new int[4];
  for(int i=0; i<5; i++){
      if(str[i]>=48 && str[i]<=57){
      
      a[i]=str[i]-48;
          //cout<<a[i]<<endl;
      }
  } 
   long hh=a[0]*10 + a[1];
    long j=hh;
    long mm=(a[3]*10 + a[4]);
    long mm2=a[1]*10 + a[0];
    
    //cout<<hh<<endl;
    //cout<<mm<<endl;
    //cout<<mm2<<endl;
    
    if(mm2>mm && mm2<60){
        
        cout<<mm2-mm<<endl;
        return 0; 
        
    }
    //cout<<a[0]<<endl;
    
  while(1){  
    //str[1]+=1;   
   hh+=1;
      if(hh==24)
          break;
      
      //cout<<hh<<endl;
      if(a[1]==9){
          a[0]+=1;
          a[1]=0;
      }
      else{
          a[1]+=1;
      }
      
       long hh2=a[0]*10 + a[1];
      long mm3=a[1]*10 + a[0];
    if(mm3<60){
        //cout<<(hh2-j-1)*60<<endl;
        cout<<((hh2-j-1)*60 + mm3 + (60-mm))<<endl;
        //cout<<mm3<<endl;
        return 0;
    }
      
  }  
   
  cout<<((24-j-1)*60+(60-mm))<<endl;  
    
    
}
