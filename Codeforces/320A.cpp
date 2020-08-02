#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 

int main(){
  
    
 long long int n;
    cin>>n;
    string s="";
    
    while(n!=0){
        int b=n%10;
        s=s+to_string(b);
        n=n/10;
    }
    reverse(s.begin(), s.end());
    string a="1";
    string b="14";
    string c="144";
    
    int i=0;
    
//     cout<<s.substr(i,i+1)<<endl;
//     cout<<s.substr(i,2)<<endl;
    
//     cout<<s.substr(3,3)<<endl;
    
    
    while(i<s.length()){
        if(s.substr(i,3)==c){
            i+=3;
        }
         else if(s.substr(i,2)==b){
            i+=2;
        }
        else if(s.substr(i,1)==a){
             // cout<<s.substr(i,1)<<endl;
            i++;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    
    cout<<"YES"<<endl;
    
    
    
    
}
