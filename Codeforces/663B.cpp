#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
 
using namespace std;
 
long long int flag[20];
 
int countdigits(int x){
    
    long long int temp=1;
    for(int i=1; i<=x; i++){
        temp*=10;
    }
    return temp;
    
}
 
void init(){
    
    flag[0]=1989;
    long long int temp=1;
    
    for(int i=1; i<=12; i++){
        temp*=10;
        flag[i]=flag[i-1]+temp;
    }
    
 
}
 
int main(){
 
    init();
    long long int n;
    cin>>n;
    
   // unordered_map<int,int> x;
   // int count=1;
   
    for(int i=0; i<n; i++){
    long long int num=0;    
    int k=1;
        
        string str;
        cin>>str;
        
        for(int j=str.size()-1; j>=4; j--){
                num+=k*(str[j]-'0');
                k*=10;
                
            }
        //cout<<num<<endl;
        
        for(int i=0; i<=200; i++){
            long long int ans=num+ i*countdigits(str.size()-4);
            
            if(ans>=flag[str.size()-5] && ans<flag[str.size()-4]){
                cout<<ans<<endl;
                break;
            }
            
        }
        
            
        
     
        
                
            
        
        
        
    }
    
}
