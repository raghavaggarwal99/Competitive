#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
 
using namespace std;
 
 
int main(){
 
    
    long long int n;
    cin>>n;
    
    //int *a=new int[n];
    string str;
    
  //  for(int i=0; i<n; i++){
        
        cin>>str;
    //cout<<str[0]<<endl;
      //  cout<<str[i]<<endl;
   // }
    
    if(n==1 && str[0]=='0'){
        cout<<"No"<<endl;
            return 0;
    }
    
    if(n==1 && str[0]=='1'){
        cout<<"Yes"<<endl;
            return 0;
    }
   
    
    
    if(str[0]=='1'){
        if(str[1]!='0'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(str[0]=='0'){
        if(str[1]=='0'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    
    if(str[n-1]=='1'){
        if(str[n-2]!='0'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(str[n-1]=='0'){
        if(str[n-2]=='0'){
             cout<<"No"<<endl;
            return 0;
        }
    }
    
    
    for(int i=1; i<n-1; i++){
        
        if(str[i]=='0'){
            if(str[i-1]=='0' && str[i+1]=='0'){
                cout<<"No"<<endl;
                return 0;
            }
        }
        else if(str[i]=='1'){
            //cout<<"dfgr"<<endl;
            if(str[i-1]=='1' || str[i+1]=='1' ){
                
                cout<<"No"<<endl;
                return 0;
            }
                
        }
        
        
    }
    cout<<"Yes"<<endl;
   
}
