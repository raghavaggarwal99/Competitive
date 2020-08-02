#include <bits/stdc++.h> 
using namespace std; 
int main(){
    
    int t,n,m;
    cin>>t;
    
    for(int i=0; i<t; i++){
        cin>>n>>m;
        
        char **a=new char*[n];
        for(int j=0; j<n; j++){
            a[j]=new char[m];
        }
        int count=0;
         for(int j=0; j<n; j++){
             for(int k=0; k<m; k++){
                cin>>a[j][k];
                 if(a[j][k]=='x'){
                     count++;
                 }
            }
        }
        
          for(int j=0; j<n; j++){
             for(int k=0; k<m; k++){
                
                 if(a[j][k]=='r'){
                     if(j-1>=0 && a[j-1][k]=='x'){
                         count--;
                         a[j-1][k]='1';
                     }
                     if(j+1<n && a[j+1][k]=='x'){
                         count--;
                         a[j+1][k]='1';
                     }
                     if(k-1>=0 && a[j][k-1]=='x'){
                         count--;
                         a[j][k-1]='1';
                     }
                     if(k+1<m && a[j][k+1]=='x'){
                         count--;
                         a[j][k+1]='1';
                     }
                     if(j-1>=0 && k-1>=0 && a[j-1][k-1]=='x'){
                         count--;
                         a[j-1][k-1]='1';
                     }
                     if(j+1<n && k+1<m && a[j+1][k+1]=='x'){
                         count--;
                         a[j+1][k+1]='1';
                     }
                     if(j-1>=0 && k+1<m && a[j-1][k+1]=='x'){
                         count--;
                         a[j-1][k+1]='1';
                     }
                     if(j+1<n && k-1>=0 &&a[j+1][k-1]=='x'){
                         count--;
                         a[j+1][k-1]='1';
                     }
                 }
                 else if(a[j][k]=='b'){
                     if(j-1>=0 && a[j-1][k]=='x'){
                         count--;
                         a[j-1][k]='1';
                     }
                     if(j+1<n && a[j+1][k]=='x'){
                         count--;
                         a[j+1][k]='1';
                     }
                     if(k-1>=0 && a[j][k-1]=='x'){
                         count--;
                         a[j][k-1]='1';
                     }
                     if(k+1<m && a[j][k+1]=='x'){
                         count--;
                         a[j][k+1]='1';
                     }
                 }
                 
            }
        }
        
        cout<<count<<endl;
    }

}
