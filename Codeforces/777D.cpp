#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
#include <iomanip> 
#include<stack>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
 
    return b;
}
 
 
int main()
{
 
int n;
cin>>n;
 
string s[1000000];
 
for(int i=0; i<n; i++){
    cin>>s[i];
}
 
 
 
for(int i=n-2; i>=0; i--){
 
int j=0;
int v=0;
 
    while(j<min(s[i].length(), s[i+1].length())){
        if(s[i][j]>s[i+1][j]){
            v=1;
            break;
        }
        else if(s[i][j]<s[i+1][j]){
            v=2;
            break;
        }
 
        j++;
    }
 
if(v==1 || v==0){
    while(j!=s[i].length()){
        s[i][j]='\0';
        j++;
    }
}
 
 
   
}
 
for(int i=0; i<n; i++){
    
    for(int j=0; j<s[i].length(); j++){
        if(s[i][j]=='\0'){
            break;
        }
        cout<<s[i][j];
    }
    cout<<endl;
 
}
 
 
 
}
 
