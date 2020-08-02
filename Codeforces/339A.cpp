#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   string str;
   cin>>str;
 
 
vector<int> a;
 
   for(int i=0; i<str.length(); i++){
 
       if(str[i]>=48 && str[i]<=57){
           a.push_back(str[i]-48);
       }
   }
 
   
 
sort(a.begin(), a.end());
 
for(int i=0; i<a.size()-1; i++){
    cout<<a[i]<<"+";
}
 
cout<<a[a.size()-1];
 
 
}
