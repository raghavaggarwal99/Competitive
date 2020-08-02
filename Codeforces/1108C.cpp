#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
string str;
cin>>str;
 
if(n==2){
   
    if(str[0]==str[1]){
        cout<<"1"<<endl;
 
        if(str[0]=='R'){
            str[1]='G';
        }
        else if(str[0]=='G'){
            str[1]='B';
        }
        else if(str[0]=='B'){
            str[1]='G';
        }
        cout<<str<<endl;
        return 0;
    }
 
    else{
        cout<<"0"<<endl;
        cout<<str<<endl;
        return 0;
    }
 
}
 
if(n==1){
    cout<<"0"<<endl;
        cout<<str<<endl;
        return 0;
}
 
 
int max=INT_MAX;
int j=0;
int q=0;
 
while(1){
 
 
char a='R';
char b='B';
char c='G';
int count=0;
if(j==6){
    break;
}
if(j==1){
    a='R';
    b='G';
    c='B';
}
if(j==2){
    a='G';
    b='R';
    c='B';
}
if(j==3){
    a='G';
    b='B';
    c='R';
}
if(j==4){
    a='B';
    b='G';
    c='R';
}
if(j==5){
    a='B';
    b='R';
    c='G';
}
 
 
 
for(int i=0; i<n; i+=3){
    if(str[i]!=a){
        count++;
    }
}
for(int i=1; i<n; i+=3){
    if(str[i]!=b){
        count++;
    }
}
for(int i=2; i<n; i+=3){
    if(str[i]!=c){
        count++;
    }
}
 
if(count<max){
    max=count;
    q=j;
}
j++;
 
}
 
cout<<max<<endl;
 
char a='R';
char b='B';
char c='G';
 
if(q==0){
     a='R';
     b='B';
    c='G';
 
    for(int i=0; i<n; i+=3){
    str[i]=a;
    }
for(int i=1; i<n; i+=3){
    str[i]=b;
}
for(int i=2; i<n; i+=3){
    str[i]=c;
}
 
cout<<str<<endl;
return 0;
 
 
}
 
if(q==1){
    a='R';
    b='G';
    c='B';
       for(int i=0; i<n; i+=3){
    str[i]=a;
    }
for(int i=1; i<n; i+=3){
    str[i]=b;
}
for(int i=2; i<n; i+=3){
    str[i]=c;
}
 
cout<<str<<endl;
return 0;
}
if(q==2){
    a='G';
    b='R';
    c='B';
 
       for(int i=0; i<n; i+=3){
    str[i]=a;
    }
for(int i=1; i<n; i+=3){
    str[i]=b;
}
for(int i=2; i<n; i+=3){
    str[i]=c;
}
 
cout<<str<<endl;
return 0;
}
if(q==3){
    a='G';
    b='B';
    c='R';
 
       for(int i=0; i<n; i+=3){
    str[i]=a;
    }
for(int i=1; i<n; i+=3){
    str[i]=b;
}
for(int i=2; i<n; i+=3){
    str[i]=c;
}
 
cout<<str<<endl;
return 0;
}
if(q==4){
    a='B';
    b='G';
    c='R';
 
       for(int i=0; i<n; i+=3){
    str[i]=a;
    }
for(int i=1; i<n; i+=3){
    str[i]=b;
}
for(int i=2; i<n; i+=3){
    str[i]=c;
}
 
cout<<str<<endl;
return 0;
}
if(q==5){
    a='B';
    b='R';
    c='G';
 
       for(int i=0; i<n; i+=3){
    str[i]=a;
    }
for(int i=1; i<n; i+=3){
    str[i]=b;
}
for(int i=2; i<n; i+=3){
    str[i]=c;
}
 
cout<<str<<endl;
return 0;
}
 
 
 
}
