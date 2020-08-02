#include <bits/stdc++.h>
#include<iostream>
#include<unordered_map>
#include<stack>
using namespace std;
 
 
int main()
{
 
 
 
string str;
cin>>str;
 
 
 stack<char> A;
 
int sum=0;
 
for(int i=0; i<=str.length(); i++){
 
if(A.empty()){
    A.push(str[i]);
    continue;
}
 
    if(str[i]=='('){
        A.push(str[i]);
        //cout<<A.top()<<endl;
 
    }
    else if(str[i]==')' && A.top()=='('){
        //cout<<A.top()<<endl;
        A.pop();
        sum+=2;
    }
    else{
        A.push(str[i]);
    }
    //cout<<"dfg"<<endl;
 
}
 
cout<<sum<<endl;
 
 
 
}
