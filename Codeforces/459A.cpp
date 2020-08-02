#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
 
int e,f,g,h;
 
    if(a==c && b!=d){
        
        if(d>b){
            f=b;
            h=d;
 
            if(d-b+a<=1000){
                e=d-b+a;
                g=e;
            }
            else{
                e=a-d+b;
                g=e;
            }
 
        }
        else{
            f=b;
            h=d;
 
            if((b-d+a)<=1000){
                e=b-d+a;
                g=e;
            }
            else{
                e=a-b+d;
                g=e;
            }
        }
 
        
 
 
    }
 
 
 
    else if(b==d && a!=c){
        
        if(c>a){
                e=a;
                g=c;
            if((b+c-a)<=1000){
                f=b+c-a;
                h=f;
            }
            else{
                f=b-c+a;
                h=f;
            }
        }
        else{
            e=a;
            g=c;
 
            if(b+a-c<=1000){
                f=b+a-c;
                h=f;
            }
            else{
                f=b+c-a;
                h=f;
            }
 
        } 
    }
 
    else if(abs(a-c)==abs(d-b)){
 
        e=c;
        f=b;
        g=a;
        h=d;
    }
    else{
        cout<<"-1"<<endl;
        return 0;
    }
 
    cout<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
    
 
    
}

