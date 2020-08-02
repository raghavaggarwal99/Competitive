#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
 
using namespace std;
int min(int a,int b){
    if(a>=b){
        return b;
    }
    return a;
}
 
int main(){
 
   long long int n,h,a,b,k,c,d,f,g;
    cin>>n>>h>>a>>b>>k;
    
    for(int i=0; i<k; i++){
        cin>>c>>d>>f>>g;
        long long int sum=0;
        long long int sum1=0;
        //long long int sum2=0;
        if(c==f){
            cout<<abs(g-d)<<endl;
            continue;
        }
        sum+=abs(f-c);
        
        if(d<=a){
            sum+=a-d;
            sum+=abs(a-g);
            cout<<sum<<endl;
        }
        else if(d>=b){
            sum+=d-b;
            sum+=abs(b-g);
            cout<<sum<<endl;
           
        }
    
        
        else if(d>a && d<b){
            sum1+=abs(f-c)+abs(d-g);
             cout<<sum1<<endl;
        }
        
       
        
        
        
        
    }
    
    
}
