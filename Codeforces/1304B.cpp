#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 


int main(){
  
  long long int n,m;
    cin>>n>>m;
    
    string palindromeleft="";
   
    
    string ans="";
    
 
    unordered_map<string,int> x;
    
    string z;
    int maxsize=-1;
    
   for(int i=0; i<n; i++){
       string copy;
       cin>>copy;
       // cout<<s<<endl;
       
       string s=copy;
       
       reverse(copy.begin(), copy.end()); 
       
       if(s==copy){
           x[s]++;
           if(x[s]>maxsize){
               maxsize=x[s];
               z=s;
           }
       }
       else{
          if(x[s]==0){
              if(x[copy]==0){
                  x[s]++;
              }
              else{
                  x[copy]--;
                   palindromeleft+=s;
                  
              }
          }
       }
       
   } 
    
 ans+=palindromeleft;
    
   for(int i=0; i<maxsize; i++){
       ans+=z;
   } 
    
   reverse(palindromeleft.begin(), palindromeleft.end());  
    
    ans+=palindromeleft;
    
    
    cout<<ans.length()<<endl;
    cout<<ans<<endl;
   
}
    

