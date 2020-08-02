#include<iostream>
 
#include<string.h>
#include<bits/stdc++.h>
#include<unordered_map>
 
using namespace std;
 
 
 
 
int main(){
    
string str;
cin>>str;
 
unordered_map<char,int> x;
 
for(long long int i=0; i<str.size(); i++){
    
    x[str[i]]++;
    
}
//cout<<x['c']<<endl;
 
if(x['c']==0 || x['b']==0 || x['a']==0){
    cout<<"NO"<<endl;
    return 0;
}
 
 
int q=0;
if(x['c']==x['b'] || x['c']==x['a']){
    
    for(long long int i=0; i<str.size()-1; i++){
        if(str[i]=='a'){
            if(str[i+1]=='c'){
                q=1;
                cout<<"NO"<<endl;
               break;
                
            }
        }
        if(str[i]=='b'){
            if(str[i+1]=='a'){
                cout<<"NO"<<endl;
                q=1;
                break;
                
            }
        }
        if(str[i]=='c'){
            if(str[i+1]!='c'){
                cout<<"NO"<<endl;
                
                q=1;
                break;
                
            }
        }
        
        
    }
    
    if(q==0){
         cout<<"YES"<<endl;
    }
    
}
else{
    cout<<"NO"<<endl;
}
 
} 
