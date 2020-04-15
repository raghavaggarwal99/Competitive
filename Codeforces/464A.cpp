#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
const int MAX=1005;
char str[MAX];
 
 
int main()
{
  
  int n,p;
  cin>>n>>p;
  scanf("%s",str+1);
 
 
int v=0;
 
    for(int i=n; i>=1; i--){
 
        for(int j=(str[i]-'a')+1; j<p; j++){
                char h=j+'a';
               // cout<<h<<endl;
 
            if(i>2 && str[i-1]!=h && str[i-2]!=h){
                //cout<<"fb"<<endl;
                str[i]=h;
                v=1;
                break;
            }
            else if(i==2 && str[i-1]!=h){
                //cout<<"fb"<<endl;
                str[i]=h;
                v=1;
                break;
            }
            else if(i==1){
                str[i]=h;
                v=1;
                break;
            }
        }
 
    
        if(v==1){
            for(int k=i+1; k<=n; k++){
                for(int d=0; d<p; d++){
                    char t= d+'a';
 
                    if(k>2 && str[k-1]!=t && str[k-2]!=t){
                        str[k]=t;
                        break;
                    }
                    else if(k==2 && str[k-1]!=t){
                        str[k]=t;
                        break;
                    }
 
                }
            }
            break;
        }
 
    }
 
if(v==0){
    cout<<"NO"<<endl;
}
else{
    for(int i=1; i<=n; i++){
        cout<<str[i];
    }
}
}
