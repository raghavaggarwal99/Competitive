#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
 
 string str;
 cin>>str;
 
 int len=str.length();
 
if(len==1){
    cout<<str[0]<<endl;
    return 0;
}
 
 
 if(len%2==0){
     int i=len/2-1;
     int j=len/2;
 
     while(1){
        
 
         cout<<str[i]<<str[j];
          if(i==0 && j==len-1){
             break;
         }
         i--;
         j++;
     }
 }
 else{
      int i=(len+1)/2-1;
     int j=(len+1)/2;
 
     while(1){
        
        if(j>len-1){
            cout<<str[i];
        }
        else
         cout<<str[i]<<str[j];
 
          if(i==0){
             break;
         }
         i--;
         j++;
     }
 
 
 }
 
 
}
