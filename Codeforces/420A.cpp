#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 


int main(){
  
  string s;
    cin>>s;
    
   string copy=s; 
    
    unordered_map<char,int> x;
    x['A']=1;
    x['H']=1;
    x['I']=1;
    x['M']=1;
    x['O']=1;
    x['T']=1;
    x['U']=1;
    x['V']=1;
    x['W']=1;
    x['X']=1;
    x['Y']=1;
    
    
    for(int i=0; i<s.length(); i++){
        if(x[s[i]]==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    int n=s.length();
    
    for(int i=0; i<s.length(); i++){
        if(copy[n-1-i]!=s[i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    
    cout<<"YES"<<endl;
    
    
    
}
    

