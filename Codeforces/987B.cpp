#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
 
int main(){
   
   long x,y;
    cin>>x>>y;
    
    if(x==y){
        cout<<"="<<endl;
        return 0;
    }
    
    double v=(x*log10(y))-(y*log10(x));
    //cout<<v<<endl;
    if(v<0){
        cout<<">"<<endl;
        
    }   
    else if(v>0){
        cout<<"<"<<endl;
    }
    else{
        cout<<"="<<endl;
    }
    
}
