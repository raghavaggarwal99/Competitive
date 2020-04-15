#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
    else
    return b;
}
 
int main()
{
  
    string str1;
    string str2;
    cin>>str1>>str2;
 
    int count1=0;
    int count2=0;
 
    for(int i=0; i<str1.length(); i++){
 
        if(str1[i]=='7' && str2[i]=='4'){
            count1++;
        }
 
        if(str1[i]=='4' && str2[i]=='7'){
            count2++;
        }
 
 
    }
 
 
    if(count2==0 && count1==0){
        cout<<"0"<<endl;
        return 0;
    }
 
    cout<<max(count1, count2)<<endl;
 
 
 
}
