#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
int main()
{
    long long int k;
    cin>>k;
int count=4;
int p=2;
 
    int *a=new int[13];
     int *b=new int[13];
      int *c=new int[13];
 int *d=new int[13];
 
for(int i=0; i<=12; i++){
    a[i]=0;
    b[i]=0;
    c[i]=0;
    d[i]=0;
}
 
 
if(k>=1){
    a[1]=1;
}
if(k>=2){
    b[1]=1;
}
 
if(k>=3){
    c[1]=1;
}
if(k>=4){
    d[1]=1;
}
 
 
 
    while(1){
        if(count>=k){
            break;
        }
 
        a[p]=1;
        count++;
 
        if(count>=k){
            break;
        }
 
        b[p]=1;
        count++;
        if(count>=k){
            break;
        }
 
        d[p]=1;
        count++;
 
        if(count>=k){
            break;
        }
        p++;
 
 
    }
cout<<"+------------------------+"<<endl;
 
    cout<<"|";
    for(int i=1; i<12; i++){
        if(a[i]==1){
            cout<<"O.";
        }
        else{
            cout<<"#.";
        }
    }
    cout<<"|D|)";
    cout<<endl;
    cout<<"|";
     for(int i=1; i<12; i++){
        if(b[i]==1){
            cout<<"O.";
        }
        else{
            cout<<"#.";
        }
    }
    cout<<"|.|";
    cout<<endl;
    cout<<"|";
    for(int i=1; i<12; i++){
        if(c[i]==1){
            cout<<"O.";
        }
        else if(c[i]==0 && i==1){
            cout<<"#.";
        }
        else{
            cout<<"..";
        }
    }
    cout<<"..|";
    cout<<endl;
    cout<<"|";
     for(int i=1; i<12; i++){
        if(d[i]==1){
            cout<<"O.";
        }
        else{
            cout<<"#.";
        }
    }
    cout<<"|.|)";
    cout<<endl;
 
    
 
 
cout<<"+------------------------+"<<endl;
 
 
}
