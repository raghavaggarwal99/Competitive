#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
int min(int a, int b){
 
    if(a>b)
    return a;
    return b;
}
 
 
int main()
{
   
int n;
cin>>n;
 
 
   string str;
   cin>>str;
 
int count=0;
 
for(int i=str.length()-1; i>=0; i--){
    if(str[i]=='2' || str[i]=='4' || str[i]=='6' || str[i]=='8'|| str[i]=='0'){
        count+=i+1;
    }
 
}
 
cout<<count<<endl;
 
 
  
}
