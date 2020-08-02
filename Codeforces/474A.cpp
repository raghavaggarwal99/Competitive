#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
 
int main(){
 
char move;
cin>>move;
 
//cout<<move<<endl;
 
string str;
cin>>str;
 
 
string str2="qwertyuiopasdfghjkl;zxcvbnm,./";
 
 
for(int i=0; i<str.length(); i++){
    //cout<<str[i]<<endl;
    
    for(int j=0; j<str2.length(); j++){
        //cout<<str2[j]<<endl;
        
        if(str[i]==str2[j]){
            //cout<<str2[j]<<endl;
            //cout<<j<<endl;
            if(move=='R'){
            str[i]=str2[j-1];
            break;
           
            }
            else if(move=='L'){
                
                str[i]=str2[j+1];
                
                break;
 
            }
        }
    }
    
    
    
}
 
for(int i=0; i<str.length(); i++)
cout<<str[i];
 
 
 
}
